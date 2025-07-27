DELIMITER //
create trigger after_employee_insert
after insert on Main_Employees
for each row
begin
    insert into employee_log(emp_id, name, action)
    values (new.emp_id, new.name, 'INSERT');
end //
DELIMITER ;
insert into Main_Employees (emp_id, name, department, salary)
values (101, 'Ravi', 'IT', 40000);

select * from employee_log;

DELIMITER //
CREATE TRIGGER before_employee_update
BEFORE UPDATE ON employees
FOR EACH ROW
BEGIN
    SET NEW.last_modified = CURRENT_TIMESTAMP;
END //
DELIMITER ;

insert into employees (emp_id, name, department, salary)
values (102, 'Amit', 'HR', 35000);

update employees
set salary = 40000
where emp_id = 102;

select * from Main¬_Employees;