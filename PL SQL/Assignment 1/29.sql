-- Find the roots of a quadratic equation
DECLARE
    num1 NUMBER := &Enter_a;
    num2 NUMBER := &Enter_b;
    num3 NUMBER := &Enter_c;
    discriminant NUMBER;
    root1 NUMBER;
    root2 NUMBER;
BEGIN
    discriminant := (num2 * num2) - (4 * num1 * num3);
    IF discriminant > 0 THEN
        root1 := (-num2 + SQRT(discriminant)) / (2 * num1);
        root2 := (-num2 - SQRT(discriminant)) / (2 * num1);
        DBMS_OUTPUT.PUT_LINE('Real and distinct roots');
        DBMS_OUTPUT.PUT_LINE('root 1 = ' || root1);
        DBMS_OUTPUT.PUT_LINE('root 2 = ' || root2);

    ELSIF discriminant = 0 THEN
        root1 := -num2 / (2 * num1);
        DBMS_OUTPUT.PUT_LINE('Real and equal roots');
        DBMS_OUTPUT.PUT_LINE('Root = ' || root1);
    ELSE 
        DBMS_OUTPUT.PUT_LINE('No solution.');
    END IF;
    
END;
/