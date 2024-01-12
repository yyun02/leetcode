/* Write your T-SQL query statement below */
Select S.name 
From SalesPerson S
Where S.sales_id NOT IN (
    Select O.sales_id
    From Orders O
    Join Company C ON C.com_id = O.com_id
    Where C.name ='RED'
)
