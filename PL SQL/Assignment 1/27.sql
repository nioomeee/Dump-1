-- Count Total Number of Alphabets, Digits, and Special Characters
DECLARE
    str VARCHAR2(100) := '&Enter_string';
    alpha NUMBER := 0;
    digits NUMBER := 0;
    special NUMBER := 0;
    charac CHAR(1);
BEGIN
    FOR i in 1..LENGTH(str) LOOP
        charac := SUBSTR(str, i, 1);

        IF charac BETWEEN 'A' AND 'Z' OR charac BETWEEN 'a' AND 'z' THEN
            alpha := alpha + 1;
        ELSIF charac BETWEEN '0' AND '9' THEN
            digits := digits + 1;
        ELSE 
            special := special + 1;
        END IF;
    END LOOP;

    DBMS_OUTPUT.PUT_LINE('Number of alphabets = ' || alpha);
    DBMS_OUTPUT.PUT_LINE('Number of digits = ' || digits);
    DBMS_OUTPUT.PUT_LINE('Number of special characters = ' || special);
END;
/