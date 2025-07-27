create user USER1 identified with USER@123 default role USER1;
grant select on universitydb.Courses to USER1;
grant select on universitydb.Courses to USER1;
revoke select on universitydb.Courses from  USER1; 

create user USER2 identified with USER2@123 default role USER2;
grant select on universitydb.Courses to USER2;
grant select on universitydb.Courses to USER2;

insert into Courses (course_id, course_name, course_credits) values
(106, 'Python', 3.5),
(107, 'Java', 4.0),
(108, 'JavaScript', 3.0);
delete from courses where course_id = 106;
delete from courses where course_id = 107;
rollback;
commit;

delete from courses where course_id = 101;
delete from courses where course_id = 102;
delete from courses where course_id = 103;

rollback;

savepoint S1;
delete from courses where course_id = 101;

savepoint S2;
delete from courses where course_id = 102;

savepoint S3;
delete from courses where course_id = 103;
select  * from Courses;
		

rollback to S1;
select * from courses;
