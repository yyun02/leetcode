/* Write your T-SQL query statement below */
Select Project.project_id, round (avg (Employee.experience_years* 1.0), 2) AS average_years
From Project Inner join Employee ON Project.employee_id = Employee.employee_id
Group by Project.project_id
