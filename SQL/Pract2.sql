-- Practical 2: Create database college, create student and teacher tables [cite: 65]

-- 1. Setup Database
CREATE DATABASE college;
USE college;

-- 2. Create Tables

CREATE TABLE student (
    stud_id int primary key, 
    s_name varchar(30), 
    phone int, 
    dept varchar(30), 
    email varchar(40), 
    address varchar(38)
);


CREATE TABLE teacher (
    teacher_id int primary key, 
    t_name varchar(30), 
    phone int, 
    qualification varchar(30)
);

-- 3. Insert Data into Student

INSERT INTO student values (101, "Momin", 7483, "Computer science", "momin.shaikh25@vupune.ac.in", "kondhwa");

INSERT INTO student values (102, "Coco", 6423, "Computer science", "coco.shaikh25@vupune.ac.in", "hadapsar");

INSERT INTO student values (103, "Lemonn", 5433, "Computer science", "lemonn.shaikh25@vupune.ac.in","hadapsar");

INSERT INTO student values (104, "chickenjokky", 4533, "Computer science", "chikenjokky.shaikh25@vupune.ac.in", "neither biome");

SELECT * FROM student;