-- Floyd’s Triangle
DECLARE
    i NUMBER;
    j NUMBER;
    k NUMBER := 1;
BEGIN
    FOR i in 1 .. 5 LOOP
        FOR j in 1 .. i LOOP
            DBMS_OUTPUT.PUT(k || ' ');
            k := k+1;
        END LOOP;
        DBMS_OUTPUT.NEW_LINE;
    END LOOP;
END;
/