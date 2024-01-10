/* Write your T-SQL query statement below */

Select W1.id 
From Weather W1, Weather W2
Where W1.temperature > W2.temperature AND W1.recordDate = Dateadd(day, +1, W2.recordDate)
