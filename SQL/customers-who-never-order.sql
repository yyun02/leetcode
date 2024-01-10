/* Write your T-SQL query statement below */

Select C.name as [Customers]
From Customers C Left Join Orders O ON C.id = O.customerId
Where O.customerId is NULL
