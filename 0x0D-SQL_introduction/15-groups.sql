-- script lists the records with the same score in second_table for database hbtn_0c_0 in your MySQL
SELECT `score`, COUNT(*) AS `number`
FROM `second_table`
GROUP BY `score`
ORDER BY `number` DESC;
