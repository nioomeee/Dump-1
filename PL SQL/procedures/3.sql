-- Create a procedure to Just print a message on prompt.
CREATE OR REPLACE PROCEDURE print_message AS
BEGIN
    DBMS_OUTPUT.PUT_LINE('HEllo world!');
END;
/
BEGIN
    print_message;
END;
/