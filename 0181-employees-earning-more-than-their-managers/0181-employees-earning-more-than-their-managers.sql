# Write your MySQL query statement below
SELECT Emp.name as Employee
FROM employee Mgr
INNER JOIN employee Emp ON Mgr.id = Emp.managerID
WHERE
Mgr.salary < Emp.salary