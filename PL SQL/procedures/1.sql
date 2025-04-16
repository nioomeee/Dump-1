--  Create a procedure to find maximum no from 3 no’s. Numbers should be entered by the 
-- user at run time.
CREATE OR REPLACE PROCEDURE find_max_of_3(
    num1 IN NUMBER, 
    num2 IN NUMBER,
    num3 IN NUMBER,
    max_val OUT NUMBER
) AS
BEGIN
    IF num1 > num2 AND num1 > num3 THEN
        max_val := num1;
    ELSIF num2 > num1 AND num2 > num3 THEN
        max_val := num2;
    ELSE 
        max_val := num3;
    END IF;
END;
/

DECLARE
    num1 NUMBER := &Enter_a;
    num2 NUMBER := &Enter_b;
    num3 NUMBER := &Enter_c;
    max_val NUMBER;
BEGIN
    find_max_of_3(num1, num2, num3, max_val);
    DBMS_OUTPUT.PUT_LINE('Result = ' || max_val);
END;
/