/* Write your T-SQL query statement below */

Select E.name , B.bonus
From Employee E Left join Bonus B ON E.empId = B.empId
Where B.bonus < 1000 OR B.bonus is NULL
