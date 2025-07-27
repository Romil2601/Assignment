DELIMITER $$

create procedure show_employees()
begin
   declare DONE int default false;

   declare e_id int;
   declare e_first_name varchar(25);
   declare e_last_name varchar(25);
   declare e_bob date;
   declare e_salary int;
   declare e_comission_pct float;
   declare e_department_id int;
   declare e_manager_id int;

   declare employees_cursor cursor for
      select emp_id, first_name, last_name, bob, salary, e_comission_pct, department_id, manager_id
      from employees;

   declare continue handler for not found set done = true;

   open employees_cursor;

   read_loop: loop
      fetch employees_cursor into 
         e_id, e_first_name, e_last_name, e_bob, 
         e_salary, e_comission_pct, e_department_id, e_manager_id;

      if DONE then
         leave read_loop;
      end if;

      select 
         e_id as ID,
         e_first_name as FIRST_NAME,
         e_last_name as LAST_NAME,
         e_bob as DOB,
         e_salary as SALARY,
         e_comission_pct as COMMISSION,
         e_department_id as DEPT_ID,
         e_manager_id as MANAGER_ID;

   end loop;

   close employees_cursor;
end$$

DELIMITER ;

call show_employees();

DELIMITER $$

create procedure show_courses()
begin
   declare done int default false;

   declare c_id int;
   declare c_name varchar(20);
   declare c_credits float;

   declare course_cursor cursor for
      select course_id, course_name, course_credits from courses;

   declare continue handler for not found set done = true;

   open course_cursor;

   read_loop: loop
      fetch course_cursor into c_id, c_name, c_credits;

      if done then
         leave read_loop;
      end if;

      select 
         c_id as Course_ID,
         c_name as Course_Name,
         c_credits as Credits;

   end loop;

   close course_cursor;
end$$

DELIMITER ;
call  show_courses();