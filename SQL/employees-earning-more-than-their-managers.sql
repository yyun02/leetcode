/* Write your T-SQL query statement below */

Select E.name AS Employee
From Employee E
Inner Join Employee m ON E.managerID = m.id
Where E.salary > m.salary
