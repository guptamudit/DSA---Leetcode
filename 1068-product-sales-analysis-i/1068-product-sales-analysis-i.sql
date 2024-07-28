# Write your MySQL query statement below
SELECT product_name, year, price 
FROM sales 
LEFT JOIN product
USING(product_id)