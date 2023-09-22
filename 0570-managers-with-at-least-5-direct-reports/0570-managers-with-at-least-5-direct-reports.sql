# Write your MySQL query statement below
SELECT t1.name
FROM Employee as t1
INNER JOIN Employee t2
ON t1.id=t2.managerId 
GROUP BY t2.managerId
HAVING count(t2.id)>=5;

