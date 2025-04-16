-- Accept a Number and Convert It into Binary
DECLARE
    num1 NUMBER := &Enter_number;
    num2 NUMBER := num1;
    bin VARCHAR2(100) := '';
    remain NUMBER;
    i NUMBER;
BEGIN

    FOR i in 1..32 LOOP
        EXIT WHEN num2 = 0;
        
        remain := MOD(num2, 2);
        bin := TO_CHAR(remain) || bin;
        num2 := TRUNC(num2 / 2);
    END LOOP;

    DBMS_OUTPUT.PUT_LINE('Binary of ' ||num1 || ' = ' || bin); 

END;
/