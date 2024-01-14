/* Write your T-SQL query statement below */
Select P.product_name, S.year, S.price
From Sales S Inner Join Product P ON P.product_id = S.product_id
