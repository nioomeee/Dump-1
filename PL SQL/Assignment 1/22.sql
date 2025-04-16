-- Accept a Date and Display Next Day’s Date (No Built-in)
DECLARE
    e_date NUMBER := &Enter_date_in_number;
    e_month NUMBER := &Enter_month_in_number;
    e_year NUMBER := &Enter_year_in_number;

    e_next_day NUMBER;
    e_next_month NUMBER;
    e_next_year NUMBER;

    days_in_month NUMBER;
    isLeap BOOLEAN := FALSE;
BEGIN
    -- check for leap year
    IF (MOD(e_year, 400) = 0) OR (MOD(e_year, 4) = 0 AND MOD(e_year, 100) != 0) THEN
        isLeap := TRUE;
    END IF;

    IF e_month IN (1, 3, 5, 7, 8, 10, 12) THEN 
        days_in_month := 31;
    ELSIF e_month IN (4, 6, 9, 11) THEN
        days_in_month := 30;
    ELSIF e_month = 2 THEN
        IF isLeap THEN
            days_in_month := 29;
        ELSE
            days_in_month := 28;
        END IF;
    ELSE 
        DBMS_OUTPUT.PUT_LINE('Invalid month entered');
        RETURN;
    END IF;
    

    -- calculating next day
    IF e_date < days_in_month THEN
        e_next_day := e_date +  1;
        e_next_month := e_month;
        e_next_year := e_year;
    ELSIF e_date = days_in_month THEN
        e_next_day := 1;
        IF e_month = 12 THEN
            e_next_month := 1;
            e_next_year := e_year + 1;
        ELSE 
            e_next_month := e_month + 1;
            e_next_year := e_year;
        END IF;
    ELSE 
        DBMS_OUTPUT.PUT_LINE('Invalid date entered');
        RETURN;
    END IF;

    DBMS_OUTPUT.PUT_LINE('Next day = ' || e_next_day || '-' || e_next_month || '-' || e_next_year);
END;
/