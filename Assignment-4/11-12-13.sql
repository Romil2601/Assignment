create table departments (
dept_id int primary key,
dept_name varchar(50)
);

create table employees (
emp_id int primary key,
emp_name varchar(50),
salary float,
dept_id int,
foreign key (dept_id) references departments(dept_id)
);

select 
    e.emp_id,
    e.emp_name,
    e.salary,
    d.dept_name
from employees e
inner join departments d
on e.dept_id = d.dept_id;

select 
    d.dept_name,
    count(e.emp_id) as employee_count
from employees e
inner join departments d
on e.dept_id = d.dept_id
group by d.dept_name;

DELIMITER //
create procedure GetAllData()
begin 
select *  from employees;
end //
DELIMITER  ;
call  GetAllData()
• Lab 2: write a stored procedure that accepts course_id as input and returns the course details.
DELIMITER //
create procedure getalldata(in course_id int)
begin
select * from courses where course_id = course_id;
end //
DELIMITER ;
call  getalldata(1);