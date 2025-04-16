-- Accept a Year and Check if It is Leap Year
DECLARE
    e_year NUMBER:= &Enter_year;
BEGIN
    IF (MOD(e_year, 400) = 0) OR (MOD(e_year, 4) = 0) THEN
        DBMS_OUTPUT.PUT_LINE(e_year || ' is a leap year');
    ELSE 
        DBMS_OUTPUT.PUT_LINE(e_year || ' is not a leap year');
    END IF;
    
END;
/