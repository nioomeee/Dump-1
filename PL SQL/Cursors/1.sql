-- Create a Cursor and fetch employee details from an EMPLOYEES table and give a 10% 
-- raise to employees. 

DECLARE
    CURSOR emp_cursor IS
        SELECT emp_id, salary from EMPLOYEES;
    
BEGIN
    FOR emp_rec IN emp_cursor LOOP
        UPDATE Employees 
        SET salary = emp_rec.salary + (emp_rec.salary * 0.10)
        WHERE emp_id = emp_rec.emp_id;

        DBMS_OUTPUT.PUT_LINE('Updated salaries of employee with id ' || emp_rec.emp_id);
    END LOOP;
END;
/

select * from employees;
drop table employees;

CREATE TABLE Employees (
    emp_id     NUMBER PRIMARY KEY,
    name       VARCHAR2(50),
    salary     NUMBER(10, 2),
    dept_id    NUMBER,
    join_date  DATE
);

INSERT INTO Employees VALUES (101, 'Aarav Shah',       24000, 10, TO_DATE('2020-06-12', 'YYYY-MM-DD'));
INSERT INTO Employees VALUES (102, 'Isha Mehta',       28000, 20, TO_DATE('2021-01-15', 'YYYY-MM-DD'));
INSERT INTO Employees VALUES (103, 'Dev Patel',        31000, 10, TO_DATE('2022-03-10', 'YYYY-MM-DD'));
INSERT INTO Employees VALUES (104, 'Riya Singh',       26000, 30, TO_DATE('2023-07-25', 'YYYY-MM-DD'));
INSERT INTO Employees VALUES (105, 'Rakesh Bhatt',     18000, 20, TO_DATE('2021-11-05', 'YYYY-MM-DD'));
INSERT INTO Employees VALUES (106, 'Neha Joshi',       29500, 30, TO_DATE('2020-12-01', 'YYYY-MM-DD'));
INSERT INTO Employees VALUES (107, 'Karan Desai',      33000, 10, TO_DATE('2019-09-14', 'YYYY-MM-DD'));
INSERT INTO Employees VALUES (108, 'Sneha Modi',       22000, 40, TO_DATE('2023-01-10', 'YYYY-MM-DD'));
INSERT INTO Employees VALUES (109, 'Mehul Panchal',    27000, 20, TO_DATE('2022-08-18', 'YYYY-MM-DD'));
INSERT INTO Employees VALUES (110, 'Priya Trivedi',    25000, 10, TO_DATE('2023-05-20', 'YYYY-MM-DD'));

COMMIT;

