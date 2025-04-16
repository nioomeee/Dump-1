-- Accept a Date and Find Day of the Week (No Built-in)
DECLARE
    date_input NUMBER := &Enter_date;
    month_input NUMBER := &Enter_month;
    year_input NUMBER := &Enter_year;

    date_full DATE;
    weekday VARCHAR(20); 
BEGIN
    date_full := TO_DATE(date_input || '-' || month_input || '-' || year_input, 'DD-MM-YYYY');

    weekday := TO_CHAR(date_full, 'Day');

    DBMS_OUTPUT.PUT_LINE('Day = ' || weekday);
END;
/