-- accept string and count vowels in it
DECLARE
    str VARCHAR2(100) := '&Enter_string';
    m_ch CHAR(1);
    m_count NUMBER:= 0;

BEGIN
    FOR i in 1 .. LENGTH(str) LOOP
        m_ch := LOWER(SUBSTR(str, i, 1));

        IF m_ch in ('a', 'e', 'i', 'o', 'u') THEN
           m_count := m_count + 1; 
        END IF;

    END LOOP;

    DBMS_OUTPUT.PUT_LINE('Number of vowels = ' || m_count);

END;
/