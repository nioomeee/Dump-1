-- Create a procedure to find the square and cube of a number. Only 1 input should be taken 
-- as IN and OUT.
CREATE OR REPLACE PROCEDURE square_and_cube (
    num1 IN NUMBER,
    sq OUT NUMBER,
    cube OUT NUMBER
) AS 
BEGIN

    sq := num1 * num1;

    cube := POWER(num1, 3);
END;
/

DECLARE
    num1 NUMBER := &Enter_number;
    sq NUMBER;
    cube NUMBER;
BEGIN
    square_and_cube(num1, sq, cube);
    DBMS_OUTPUT.PUT_LINE('The square of ' || num1 || ' = ' || sq);
    DBMS_OUTPUT.PUT_LINE('The cube of ' || num1 || ' = ' || cube);
END;
/
