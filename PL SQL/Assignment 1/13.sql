-- Accept a Number and Generate Fibonacci Series
DECLARE
    term NUMBER := &Enter_term_count;
    num1 NUMBER := 0;
    num2 NUMBER := 1;
    num3 NUMBER;

BEGIN
    DBMS_OUTPUT.PUT_LINE('fFibonacci series up to ' || term || ' terms: ');

    FOR i in 1 .. term LOOP
        DBMS_OUTPUT.PUT_LINE(num1);
        num3 := num2 + num1;
        num1:= num2;
        num2 := num3;
    END LOOP;
END;
/