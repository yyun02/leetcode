/* Write your T-SQL query statement below */
--https://leetcode.com/problems/customer-placing-the-largest-number-of-orders/solutions/4362748/think-like-sql-engine-easily-understandable-solution/

SELECT Top 1 customer_number FROM Orders
GROUP BY customer_number
ORDER BY count(customer_number) DESC
--Limit 1
