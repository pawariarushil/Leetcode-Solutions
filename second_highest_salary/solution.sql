# Write your MySQL query statement below
select(select DISTINCT salary as SecondHighestSalary from Employee ORDER BY salary DESC LIMIT 1 OFFSET 1) as SecondHighestSalary;