-- check for armstrong number
DECLARE
    num1 NUMBER := 561;
    dig NUMBER;
    num2 NUMBER := num1;
    cube NUMBER;
    t_sum NUMBER := 0;
BEGIN
    WHILE num2 > 0 LOOP
        dig := MOD(num2, 10);
        cube := POWER(dig, 3);
        t_sum := t_sum + cube;
        num2 := TRUNC(num2 / 10);
    END LOOP;

    IF t_sum = num1 THEN
        DBMS_OUTPUT.PUT_LINE('Entered number is armstrong');
    ELSE
        DBMS_OUTPUT.PUT_LINE('The entered number is not armstrong');
    END IF;
END;
/