-- Accept a Number and Find its Factorial

DECLARE
    num1 NUMBER := &Enter_Number;
    factorial NUMBER := 1;
BEGIN
    FOR i in 1..num1 LOOP
        factorial := factorial * i;
    END LOOP;

    DBMS_OUTPUT.PUT_LINE('The factorial of ' || num1 || ' = ' || factorial);
END;
/