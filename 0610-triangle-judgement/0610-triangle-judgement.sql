# Write your MySQL query statement below
select *, IF(x+y>z and y+z>x and x+z>y, "Yes", "No") as triangle from Triangle