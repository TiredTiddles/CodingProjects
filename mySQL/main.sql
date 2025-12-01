set SQL_SAFE_UPDATES = 0;

select * from employees
where position like "_ook";

set SQL_SAFE_UPDATES = 1;