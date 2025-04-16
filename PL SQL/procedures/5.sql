-- Create a procedure to update the salary of an employee whose name is ‘Dinesh’. 
CREATE OR REPLACE PROCEDURE update_sal (new_sal IN NUMBER) AS BEGIN
    UPDATE EMployee SET salary = new_sal WHERE emp_name = 'Dinesh';
END;
/