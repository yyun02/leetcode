-- Write your T-SQL query statement below
SELECT P.product_id, P.product_name
FROM Product P INNER JOIN Sales S ON P.product_id = S.product_id
GROUP BY P.product_id, P.product_name
HAVING MIN(S.sale_date) >= '2019-01-01' AND MAX(S.sale_date) <= '2019-03-31'

/* Write your T-SQL query statement below */
--https://leetcode.com/problems/sales-analysis-iii/solutions/3027757/faster-than-98-73-left-join-is-faster-than-in/

SELECT DISTINCT A.product_id, B.product_name
FROM Sales A LEFT JOIN Product B ON A.product_id = B.product_id LEFT JOIN (SELECT DISTINCT product_id FROM Sales WHERE sale_date not between '2019-01-01' and '2019-03-31') C ON A.product_id = C.product_id
WHERE C.product_id is null
