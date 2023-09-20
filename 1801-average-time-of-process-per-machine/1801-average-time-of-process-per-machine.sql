# Write your MySQL query statement below
SELECT t1.machine_id, ROUND(AVG(t2.timestamp-t1.timestamp),3) AS processing_time
FROM Activity t1
JOIN Activity t2
ON t1.machine_id=t2.machine_id
WHERE t1.activity_type='start' AND t2.activity_type='end'
GROUP BY t1.machine_id;