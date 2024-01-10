/* Write your T-SQL query statement below */

SELECT name FROM customer
WHERE referee_id <> 2 or referee_id is null
