create schema school_db;

create table students
(student_id int not null unique,
student_name varchar(25) not null,
age int not null,
class int not null,
address varchar(25) not null);

alter table students modify class varchar(10);

insert into students values
(1, 'Aayush Mehta', 18, '12A', 'Ahmedabad'),
(2, 'Riya Shah', 17, '11B', 'Surat'),
(3, 'Karan Patel', 19, '12C', 'Vadodara'),
(4, 'Meera Joshi', 18, '11A', 'Rajkot'),
(5, 'Devansh Rao', 17, '10B', 'Bhavnagar');

select * from students;

select student_name,age from students;

insert into students values(6, 'Aarav Desai', 9, '4A', 'Ahmedabad'),
(7, 'Kiara Bhatt', 8, '3B', 'Surat'),
(8, 'Vivaan Trivedi', 7, '2A', 'Vadodara'),
(9, 'Myra Kapoor', 9, '4B', 'Rajkot'),
(10, 'Advik Joshi', 8, '3A', 'Bhavnagar');

select * from students where age>10;

alter table students
add column teacher_id int;

alter table students
add constraint fk_teacher
foreign key(teacher_id)
references teachers(teacher_id);