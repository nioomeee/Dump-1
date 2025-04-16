-- Sum of 1 + 1/2 + 1/3 + … + 1/n
DECLARE
    num1 NUMBER := &Enter_Number;
    i NUMBER;
    res NUMBER := 0;
BEGIN
    FOR i in 1 .. num1 LOOP
        res := res + (1 / i);
    END LOOP;

    DBMS_OUTPUT.PUT_LINE('The sum of the series 1 + 1/2 + 1/3 + ... 1/' || num1 || ' = ' || res);
END;
/