/* Write your T-SQL query statement below */

Select class 
From Courses
Group by class
Having count(class) >= 5
