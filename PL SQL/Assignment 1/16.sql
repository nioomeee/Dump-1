-- Sum of First and Last Digit of a Number
DECLARE 
    num1 NUMBER := &Enter_Number;
    num2 NUMBER := num1;
    last_dig NUMBER;
    first_dig NUMBER;
    sum_dig NUMBER;
BEGIN

    last_dig := MOD(num2, 10);

    -- now 1st digit
    WHILE num2 >= 10 LOOP
        num2 := TRUNC(num2 / 10);
    END LOOP;

    first_dig := num2;

    -- sum 1st and last digit
    sum_dig := last_dig + first_dig;
    DBMS_OUTPUT.PUT_LINE('First Digit = ' || first_dig);
    DBMS_OUTPUT.PUT_LINE('Last Digit = ' || last_dig);
    DBMS_OUTPUT.PUT_LINE('Sum of First and Last Digit = ' || sum_dig);
END;
/