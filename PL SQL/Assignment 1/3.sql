-- reverse pyramid
DECLARE
    i NUMBER := 5;
    j NUMBER;
BEGIN
    FOR i in REVERSE 5 .. 1 LOOP
        FOR j in 1 .. i LOOP
            DBMS_OUTPUT.PUT('* ');
        END LOOP;
        DBMS_OUTPUT.NEW_LINE;
    END LOOP;
END;
