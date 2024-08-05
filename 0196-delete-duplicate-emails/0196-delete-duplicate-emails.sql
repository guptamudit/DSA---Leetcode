# Write your MySQL query statement below
WITH RankedPersons AS (
    SELECT id,
           email,
           ROW_NUMBER() OVER (PARTITION BY email ORDER BY id) AS rn
    FROM person
)
DELETE FROM person
WHERE id IN (
    SELECT id
    FROM RankedPersons
    WHERE rn > 1
);