-- Creat ea database
create database university_db;
use university_db;

-- Creating the structure (schema)
create table student_grades(
	student_id INT,
    score INT
);

-- insert raw data 
insert into student_grades (student_id,score) values (101,85);
insert into student_grades (student_id,score) values (101,95);

-- Retrive informatuon 
select * from student_grades;

-- Asking information on processed data 
select score
from student_grades
where score > 85;

create table quiz_scores(
	student_name varchar(50),
    score int
);

-- inserting multiple values
insert into quiz_scores values ('Rahul',10),('amir',20),('rahul',40);

select * from quiz_scores;

select student_name,avg(score) as final_subject
from quiz_scores
group by student_name;

select student_name,avg(score) as final_subject
from quiz_scores
group by student_name
having avg(score) > 15;

-- Data defination langugae (DDL)

-- ALTER
-- Adding column name
ALTER TABLE quiz_scores
ADD stud_id INT NOT NULL; -- format ADD datatype constraints

-- droping column name
ALTER TABLE quiz_scores
DROP COLUMN stud_id; 

-- renaming column name
ALTER TABLE quiz_scores
RENAME COLUMN stud_id to student_id;

-- renaming table name
ALTER TABLE quiz_scores
RENAME quiz;

-- DROP
DROP database quiz;
DROP TABLE quiz;

-- Data manipulation language(DML)

-- INSERT 
INSERT INTO quiz VALUES("Momin",78,1);

-- inserting into a pertcular column
INSERT INTO quiz 
(student_name,student_id)
VALUES
("aloo",12);

-- UPDATE
UPDATE quiz
SET score = 90
WHERE score IS NULL;  

DELETE FROM quiz
WHERE score < 20;

select * from quiz;
SET SQL_SAFE_UPDATES =0;

INSERT INTO quiz
VALUES("Banker",89,9);
COMMIT;

DELETE FROM quiz
WHERE score < 20;
ROLLBACK;

-- Solving question bank answer
-- Create a bank table
create table bank (
	act_id int primary key,
    act_name varchar(50) not null,
    bank_name varchar(20) not null,
    act_type varchar(20) check ( act_type in ("saving","current")),
    openninng_date date
    );
    
insert into bank values(1,"momin","hdfc","saving","2020-01-18");

delete from bank where act_id = 1;

create table employee(
	emply_id int primary key,
	emply_name varchar(50) not null,
    salary decimal(10,2),
    date_of_joining date
    );
    
-- Alter all cmd

alter table employee 
drop working_hr;

alter table employee
modify column emply_name varchar(20) unique;

alter table employees
rename employee;
    
insert into employee values(1,"nano",50000,"2022-01-14");

alter table employee
add working_hr int check(working_hr <= 2);

select * from employee;

update employee 
set working_hr = 7
where working_hr = NULL;

-- string function 

select concat("hello"," ","world"); 
select upper("hello"),upper("hello");
select length("hello ");
select length((select substring("hello world",1,15)))as lenth;

-- TCL

start transaction ;

select * from employee;

delete from employee
where emply_id =1;


commit;



 











