# Write your MySQL query statement below
select eu.unique_id, e.name from
Employees e left join EmployeeUNI eu ON e.id = eu.id OR eu.unique_id IS NULL;
