/* Write your T-SQL query statement below */

Update Salary
Set sex = case
    when sex = 'f' then 'm'
    when sex = 'm' then 'f'
END;

update salary set sex = iif(sex = 'm','f','m');
