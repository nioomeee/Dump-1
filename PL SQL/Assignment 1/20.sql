-- Accept 3 Numbers and Find the Largest
DECLARE
    num1 NUMBER := &Enter_1_number;
    num2 NUMBER := &Enter_2_number;
    num3 NUMBER := &Enter_3_number;
    maxi NUMBER;
BEGIN
    IF num1 > num2 AND num1 > num3 THEN
        maxi := num1;
    ELSIF num2 > num1 AND num2 > num3 THEN 
        maxi := num2;
    ELSE 
        maxi := num3;
    END IF;

    DBMS_OUTPUT.PUT_LINE('Largest number of 3 = ' || maxi);
END;
/