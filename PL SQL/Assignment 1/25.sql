-- WAP to accept a string and print it in reverse order
DECLARE
    str VARCHAR2(100) := '&Enter_string';
    revStr VARCHAR2(100);
    i NUMBER;
BEGIN
    FOR i in REVERSE 1 .. LENGTH(str) LOOP
        revStr := revStr || SUBSTR(str, i, 1);
    END LOOP;

    DBMS_OUTPUT.PUT_LINE('Original string = ' || str);
    DBMS_OUTPUT.PUT_LINE('Reversed string = ' || revStr);
END;
/