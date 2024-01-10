-- https://leetcode.com/problems/duplicate-emails/solutions/3827277/100-easy-fast-clean-solution/

/* Write your T-SQL query statement below */

Select distinct P1.email 
From Person P1, Person P2
Where P1.id <> P2.id AND P1.email = P2.email
