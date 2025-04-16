CREATE TABLE Product (
    Prod_id VARCHAR2(10),
    Prod_name VARCHAR2(50),
    Prod_amt NUMBER,
    Prod_comp VARCHAR2(50),
    Prod_mfgdate DATE,
    Prod_expdate DATE
);

INSERT INTO Product VALUES ('P100', 'Soap', 20, 'HUL', TO_DATE('2023-01-01', 'YYYY-MM-DD'), TO_DATE('2025-01-01', 'YYYY-MM-DD'));
INSERT INTO Product VALUES ('P101', 'Shampoo', 100, 'Dove', TO_DATE('2022-06-01', 'YYYY-MM-DD'), TO_DATE('2024-06-01', 'YYYY-MM-DD'));
INSERT INTO Product VALUES ('P102', 'Toothpaste', 50, 'Colgate', TO_DATE('2023-02-01', 'YYYY-MM-DD'), TO_DATE('2025-02-01', 'YYYY-MM-DD'));
INSERT INTO Product VALUES ('P103', 'Cream', 75, 'Ponds', TO_DATE('2022-08-01', 'YYYY-MM-DD'), TO_DATE('2024-08-01', 'YYYY-MM-DD'));
INSERT INTO Product VALUES ('P105', 'Lotion', 150, 'Nivea', TO_DATE('2023-03-01', 'YYYY-MM-DD'), TO_DATE('2025-03-01', 'YYYY-MM-DD'));

SELECT * FROM Product;
