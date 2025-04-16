-- multiplication table
DECLARE 
    num NUMBER;
    i NUMBER := 1;
BEGIN
    num := &Enter_number; --prompt for user input

    DBMS_OUTPUT.PUT_LINE('Multiplication table for ' || num);

    WHILE i <= 10 LOOP
        DBMS_OUTPUT.PUT_LINE(num || ' x ' || i || ' = ' || (num*i));
        i := i+1;
    END LOOP;
END;
/