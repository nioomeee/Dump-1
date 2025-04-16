-- pyramid using number patterns
DECLARE
    i NUMBER := 1;
    j NUMBER;
BEGIN
    FOR i in 1 .. 5 LOOP
        FOR j in 1 .. i LOOP
            DBMS_OUTPUT.PUT(j || ' ');
        END LOOP;
        DBMS_OUTPUT.NEW_LINE;
    END LOOP;
END;
