# Write your MySQL query statement below
select t1.name as Customers from Customers as t1 left join Orders as t2 
on t1.id = t2.customerId where t2.customerId is null