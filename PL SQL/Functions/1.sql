-- Function to calculate reverse of a number
CREATE OR REPLACE FUNCTION reverse_number (num1 IN NUMBER) RETURN NUMBER IS
    rev_num NUMBER := 0;
    temp NUMBER := num1;
BEGIN
    WHILE temp > 0 LOOP
        rev_num := rev_num * 10 + MOD(temp, 10);
        temp := TRUNC(temp / 10);
    END LOOP;
    RETURN rev_num;
END;
/

DECLARE 
    num1 NUMBER := &Enter_number;
    res NUMBER;
BEGIN
    res := REVERSE_NUMBER(num1);
    DBMS_OUTPUT.PUT_LINE('the reverse of number ' || num1 || ' = ' || res);
END;
/