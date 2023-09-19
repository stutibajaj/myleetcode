# Write your MySQL query statement below
SELECT w1.id 
FROM Weather w1
JOIN Weather w2
ON w1.recordDate=DATE_ADD(w2.recordDate, interval 1 day)
WHERE w1.temperature > w2.temperature