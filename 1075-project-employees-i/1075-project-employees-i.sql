# Write your MySQL query statement below
select p.project_id , ROUND(AVG(e.experience_years),2) AS average_years
from Project p
left join Employee e
on p.employee_id = e.employee_id
GROUP BY p.project_id