/* Write your T-SQL query statement below */
Select firstName, lastName, city, state from Address right join Person on Person.personId = Address.personId

https://leetcode.com/problems/combine-two-tables/solutions/3659411/ms-sql/
/* Write your T-SQL query statement below */
SELECT P.firstName, P.lastName, A.city, A.state
FROM Person P LEFT JOIN Address A
on P.personId = A.personId
