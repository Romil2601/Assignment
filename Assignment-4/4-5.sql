create table courses
(course_id int primary key not null unique,
course_name varchar(25) not null,
course_credits int);

create database university_db;

alter table Courses add column course_duration varchar(10);

alter table Courses drop column course_credits;