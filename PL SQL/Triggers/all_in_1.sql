-- after delete trigger
CREATE TABLE Product_new1 AS SELECT * FROM Product WHERE 1=2;

CREATE OR REPLACE TRIGGER trg_after_delete_soap
AFTER DELETE ON Product
FOR EACH ROW 
WHEN (Old.Prod_name = 'Soap')
BEGIN
    INSERT INTO Product_new1 VALUES(:OLD.Prod_id, :OLD.Prod_name, :OLD.Prod_amt, :OLD.Prod_comp, :OLD.Prod_mfgdate, :OLD.Prod_expdate);
END;
/

-- before delete trigger
CREATE OR REPLACE TRIGGER before_delete_p103
BEFORE DELETE ON Product
FOR EACH ROW
WHEN (Prod_id = 'P103')
BEGIN
    INSERT INTO PRODUCT_NEW VALUES(:OLD.Prod_id, :OLD.Prod_name, :OLD.Prod_amt, :OLD.Prod_comp, :OLD.Prod_mfgdate, :OLD.Prod_expdate);
END;
/

-- before insert 3(b)
CREATE OR REPLACE TRIGGER before_insert
BEFORE INSERT ON Product
FOR EACH ROW 
BEGIN
    INSERT INTO PRODUCT_NEW VALUES(:OLD.Prod_id, :OLD.Prod_name, :OLD.Prod_amt, :OLD.Prod_comp, :OLD.Prod_mfgdate, :OLD.Prod_expdate);
END;
/

-- after insert 4(b) and back up new data
CREATE OR REPLACE TRIGGER after_insert
AFTER INSERT ON Product
FOR EACH ROW BEGIN
    INSERT INTO PRODUCT_NEW VALUES(:OLD.Prod_id, :OLD.Prod_name, :OLD.Prod_amt, :OLD.Prod_comp, :OLD.Prod_mfgdate, :OLD.Prod_expdate);
END;
/

-- after update 5(b) 
