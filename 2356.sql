# Number of unique subjects taught by each teacher
# Easy

SELECT teacher_id, COUNT(DISTINCT subject_id) as cnt
FROM Teacher
group by teacher_id;
