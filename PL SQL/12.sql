-- prime number check Generate All Prime Numbers from 1 to 100
DECLARE
    isPrime BOOLEAN := TRUE;
BEGIN
    FOR i in 2 .. 100 LOOP
        isPrime := TRUE;

        FOR j in 2 .. TRUNC(SQRT(i)) LOOP
            IF MOD(i, j) = 0 THEN
                isPrime := FALSE;
                EXIT;
            END IF;
        END LOOP;

        IF isPrime = TRUE THEN
            DBMS_OUTPUT.PUT_LINE(i);
        END IF;
        
    END LOOP;
END;
/