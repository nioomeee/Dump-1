-- sum of numbers from 1 to 100
DECLARE
    t_sum NUMBER := 0;  -- sum is a reserved keyword 
BEGIN
    FOR i in 1 .. 100 LOOP
        t_sum := t_sum + i;
    END LOOP;

    DBMS_OUTPUT.PUT_LINE('The sum of numbers from 1-100 = ' || t_sum);
END;
/