# Write your MySQL query statement below
Select e1.name 
FROM Employee e1
LEFT JOIN Employee e2
ON e1.id = e2.managerId
GROUP BY e1.id
HAVING COUNT(e2.name) >= 5