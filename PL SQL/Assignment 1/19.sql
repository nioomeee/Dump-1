-- Calculate Simple and Compound Interest
DECLARE
    Principle NUMBER := &Enter_Principle;
    Rate NUMBER := &Enter_Rate;
    T NUMBER := &Enter_time;
    SI NUMBER;
    CI NUMBER;
BEGIN
    -- simple interest
    SI := (Principle * Rate * T) / 100;

    -- compound interest
    CI := Principle * (POWER(1 + (Rate / 100), T)) - Principle;

    DBMS_OUTPUT.PUT_LINE('Simple interest = ' || SI);
    DBMS_OUTPUT.PUT_LINE('Compound interest = ' || CI);
END;
/