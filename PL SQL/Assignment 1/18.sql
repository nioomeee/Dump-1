-- Find Square Root of a Number Without Using SQRT Function
DECLARE
    num1 NUMBER := &Enter_Number;
    guess NUMBER := 1;
    epsilon NUMBER := 0.00001; -- for accuracy
BEGIN

    IF num1 < 0 THEN
        DBMS_OUTPUT.PUT_LINE('Square Root of negaative number not possible');
    ELSIF num1 = 0 THEN
        DBMS_OUTPUT.PUT_LINE('Square root of 0 = 0');
    ELSE 
        LOOP
            EXIT WHEN ABS(guess * guess - num1) <= epsilon;
            guess := (guess + (num1 / guess)) / 2;
        END LOOP;
    END IF;
    DBMS_OUTPUT.PUT_LINE('Square root of ' || num1 || ' = ' || guess);
END;
/