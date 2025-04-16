-- Create a procedure to display the users record.
CREATE OR REPLACE PROCEDURE display_users_record AS
BEGIN
    FOR rec IN (SELECT * FROM USERS) LOOP
        DBMS_OUTPUT.PUT_LINE('User id = ' || rec.id || ', Name = ' || rec.name1);
    END LOOP;
END;
/

BEGIN
    display_users_record;
END;
/