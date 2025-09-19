# Write your MySQL query statement below
select employee_id,department_id
from Employee
where primary_flag = 'Y'
union
select e.employee_id,e.department_id
from Employee e
join (
    select employee_id
    from Employee
    group by employee_id
    having count(*)=1
) one using (employee_id)