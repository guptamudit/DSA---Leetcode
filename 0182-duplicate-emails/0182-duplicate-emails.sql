# Write your MySQL query statement below
SELECT distinct(email) as Email FROM Person 
WHERE email IN (SELECT email FROM Person AS S WHERE Person.id <> S.id );