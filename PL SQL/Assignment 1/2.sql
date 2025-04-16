-- star pattern in pyramid shape
DECLARE
    i NUMBER := 1;
    j NUMBER := 1;
BEGIN
    FOR i in 1 .. 5 LOOP
        FOR j in 1 .. i LOOP
            DBMS_OUTPUT.PUT('* ');
        END LOOP;
        DBMS_OUTPUT.NEW_LINE;
    END LOOP;
END;
/