-- right aligned pyramid
DECLARE 
    i NUMBER;
    j NUMBER;
    k NUMBER;
    sp NUMBER;
BEGIN
    FOR i in 1 .. 5 LOOP
        sp := 6 - i - 1;
        FOR k in 1 .. sp LOOP
            DBMS_OUTPUT.PUT('  ');
        END LOOP;
        FOR j in 1 .. i LOOP
            DBMS_OUTPUT.PUT(j || ' ');
        END LOOP;
        DBMS_OUTPUT.NEW_LINE;
    END LOOP;
END;
/