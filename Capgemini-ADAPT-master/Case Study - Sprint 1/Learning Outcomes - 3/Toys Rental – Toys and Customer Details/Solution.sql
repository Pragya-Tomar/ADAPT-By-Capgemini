alter session set current_schema = mt_toy;
SET heading OFF

SELECT CUSTOMER_NAME, TOY_NAME, RENTAL_END_DATE
FROM CUSTOMER C, TOY T, TOY_RENTAL R
WHERE C.CUSTOMER_ID = R.CUSTOMER_ID(+)
AND R.TOY_ID = T.TOY_ID;