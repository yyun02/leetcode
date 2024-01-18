/* Write your T-SQL query statement below */
-- https://leetcode.com/problems/reformat-department-table/solutions/4362842/think-like-sql-engine-learn-2-different-solutions/

SELECT id,
       SUM(CASE WHEN month = 'Jan' THEN revenue ELSE null END) AS Jan_Revenue,
       SUM(CASE WHEN month = 'Feb' THEN revenue ELSE null END) AS Feb_Revenue,
       SUM(CASE WHEN month = 'Mar' THEN revenue ELSE null END) AS Mar_Revenue,
       SUM(CASE WHEN month = 'Apr' THEN revenue ELSE null END) AS Apr_Revenue,
       SUM(CASE WHEN month = 'May' THEN revenue ELSE null END) AS May_Revenue,
       SUM(CASE WHEN month = 'Jun' THEN revenue ELSE null END) AS Jun_Revenue,
       SUM(CASE WHEN month = 'Jul' THEN revenue ELSE null END) AS Jul_Revenue,
       SUM(CASE WHEN month = 'Aug' THEN revenue ELSE null END) AS Aug_Revenue,
       SUM(CASE WHEN month = 'Sep' THEN revenue ELSE null END) AS Sep_Revenue,
       SUM(CASE WHEN month = 'Oct' THEN revenue ELSE null END) AS Oct_Revenue,
       SUM(CASE WHEN month = 'Nov' THEN revenue ELSE null END) AS Nov_Revenue,
       SUM(CASE WHEN month = 'Dec' THEN revenue ELSE null END) AS Dec_Revenue
FROM Department
GROUP BY id

--------------------------------------------------------------------------------------------

/* Write your T-SQL query statement below */
SELECT id, 
    Jan as Jan_Revenue,
    Feb as Feb_Revenue,
    Mar as Mar_Revenue,
    Apr as Apr_Revenue,
    May as May_Revenue,
    Jun as Jun_Revenue,
    Jul as Jul_Revenue,
    Aug as Aug_Revenue,
    Sep as Sep_Revenue,
    Oct as Oct_Revenue,  
    Nov as Nov_Revenue,
    Dec as Dec_Revenue 
FROM Department
PIVOT
(
    SUM(revenue) FOR Month IN (Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec)
) As PivotTable
