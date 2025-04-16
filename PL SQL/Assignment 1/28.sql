BEGIN
    FOR i in 1..5 LOOP
        FOR j in 1..i LOOP
            DBMS_OUTPUT.PUT(TO_CHAR(j) || '2 ');
        END LOOP;
        DBMS_OUTPUT.NEW_LINE;
    END LOOP;

END;
/