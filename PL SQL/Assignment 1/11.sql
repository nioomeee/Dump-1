-- Generate All Armstrong Numbers from 1 to 1000
DECLARE
    num1 NUMBER;
    num2 NUMBER;
    temp NUMBER;
    dig NUMBER;
    t_count NUMBER := 0;
    t_sum NUMBER := 0;
BEGIN
    DBMS_OUTPUT.PUT_LINE('Armstrong numbers from 1 to 1000: ');

    FOR num1 in 1 .. 1000  LOOP
        num2 := num1;
        temp := num1;
        t_count := 0;
        t_sum := 0;

        -- 1st count of digits
        while temp > 0 LOOP
            t_count := t_count + 1;
            temp := TRUNC(temp / 10);
        END LOOP;

        temp := num2;
        -- sum of digits
        WHILE temp > 0 LOOP
            dig := MOD(temp, 10);
            t_sum := t_sum  + POWER(dig, t_count);
            temp := TRUNC(temp / 10);
        END LOOP;

        IF t_sum = num2 THEN
            DBMS_OUTPUT.PUT_LINE(num2);
        END IF;

    END LOOP; 
END;
/