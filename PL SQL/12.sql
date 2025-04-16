-- prime number check
DECLARE
    num1 NUMBER := 13;
    isPrime BOOLEAN := TRUE;
BEGIN
    FOR i in 2 .. num1/2 LOOP
        IF MOD(num1 , i) = 0 THEN
            isPrime := FALSE;
        END IF;
    END LOOP;

    IF isPrime = TRUE THEN
        DBMS_OUTPUT.PUT_LINE(num1 || ' is a prime number');
    ELSE
        DBMS_OUTPUT.PUT_LINE(num1 || ' is not a prime number');
    END IF;
END;
/