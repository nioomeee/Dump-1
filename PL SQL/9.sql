-- Accept a Number and Find How Many Digits It Has, palindrome, reverse
DECLARE
    num1 NUMBER := &Enter_Number;
    num2 NUMBER := num1;
    remain NUMBER;
    rev NUMBER := 0;
    t_count NUMBER:= 0;

BEGIN
    WHILE num2 > 0 LOOP
        t_count:= t_count + 1;
        remain := MOD(num2, 10);
        rev := (rev * 10) + remain;
        num2 := TRUNC(num2 / 10);
    END LOOP;

    DBMS_OUTPUT.PUT_LINE('The number of digits in number ' || num1 || ' = ' || t_count);
    DBMS_OUTPUT.PUT_LINE('Reverse of number ' || num1 || ' = ' || rev);

    IF rev = num1 THEN
        DBMS_OUTPUT.PUT_LINE('The number ' || num1 || ' is palindrome.');
    ELSE
        DBMS_OUTPUT.PUT_LINE('The number ' || num1 || ' is not a palindrome.');
    END IF;
END;
/