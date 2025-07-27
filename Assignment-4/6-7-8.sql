drop table teachers;

insert into Courses values (101,'Maths','Two Year');

update Courses set course_duration = 'Five Year' WHERE course_id = 101;

delete from Courses where course_id =  101;

select * from courses;

select * 
from Courses
where course_duration
order by course_duration desc;

select * from courses
limit 2;
