-- WAP to accept A,B,C & D check whether it is Ramanujan number or not
SET SERVEROUTPUT ON;
ACCEPT Enter_A NUMBER PROMPT 'Enter value for A: ';
ACCEPT Enter_B NUMBER PROMPT 'Enter value for B: ';
ACCEPT Enter_C NUMBER PROMPT 'Enter value for C: ';
ACCEPT Enter_D NUMBER PROMPT 'Enter value for D: ';

DECLARE
    num1 NUMBER := &Enter_A;
    num2 NUMBER := &Enter_B;
    num3 NUMBER := &Enter_C;
    num4 NUMBER := &Enter_D;
    sum1 NUMBER;
    sum2 NUMBER;
BEGIN
    sum1 := POWER(num1, 3) + POWER(num2, 3);
    sum2 := POWER(num3, 3) + POWER(num4, 3);

    DBMS_OUTPUT.PUT_LINE('A³ + B³ = ' || sum1);
    DBMS_OUTPUT.PUT_LINE('C³ + D³ = ' || sum2);

    IF sum1 = sum2 THEN
        DBMS_OUTPUT.PUT_LINE('it is a ramanujan number');
    ELSE 
        DBMS_OUTPUT.PUT_LINE('it is not a ramanujan number');
    END IF;

END;
/