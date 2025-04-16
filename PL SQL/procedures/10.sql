-- Create a procedure to find a employee whose id is 1002
CREATE OR REPLACE PROCEDURE find_employee (eid IN NUMBER) AS 
emp_name VARCHAR2(100);
BEGIN
    SELECT e_name into emp_name from EMPLOYEES WHERE id = eid;
    DBMS_OUTPUT.PUT_LINE('Employee name = ' || emp_name);
EXCEPTION
    WHEN NO_DATA_FOUND THEN
        DBMS_OUTPUT.PUT_LINE('No data found');
END;
/