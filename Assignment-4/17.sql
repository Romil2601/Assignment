create table employment (
ID int primary key,
name varchar(15)
);
insert into employment (id,name) values (1,'RAVI');
savepoint save1;

insert into employment (id,name) values (2,'MOHIT');
INSERT INTO employment (id,name) values (3,'DHRUV');

select * from employment;
rollback to save1;