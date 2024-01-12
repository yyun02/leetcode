/* Write your T-SQL query statement below */

Select actor_id, director_id
From ActorDirector
Group by actor_id, director_id
having count(*) >=3;
