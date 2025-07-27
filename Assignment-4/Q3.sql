create table teachers
(teacher_id int primary key not null unique,
teacher_name varchar(25) not null,
subject varchar(25) not null,
email varchar(45) unique);