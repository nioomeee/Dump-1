-- triangle
DECLARE
    i NUMBER := 1;
    j NUMBER;
    space NUMBER;
BEGIN
    FOR i in 1 .. 5 LOOP
        space := 5 - i;
        WHILE space > 0 LOOP
            DBMS_OUTPUT.PUT(' ');
            space := space - 1;
        END LOOP;

        FOR j in 1 .. i LOOP
            DBMS_OUTPUT.PUT(j || ' ');
        END LOOP;

        DBMS_OUTPUT.NEW_LINE;
    END LOOP;
END;
