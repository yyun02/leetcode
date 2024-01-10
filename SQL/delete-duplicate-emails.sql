/* Write your T-SQL query statement below */
--https://leetcode.com/problems/delete-duplicate-emails/solutions/2627589/my-sql-solution/

Delete p1 from person p1, person p2
Where p1.email = p2.email and p1.id > p2.id
