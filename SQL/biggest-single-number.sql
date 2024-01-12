/* Write your T-SQL query statement below 

when using aggregate functions like MAX(), MIN(), SUM(), etc., 
any non-aggregated column in the SELECT list should be included in the GROUP BY clause

*/

Select max(num) as num
From (
    Select num
    From MyNumbers
    group by num
    having count(*) =1
) num
