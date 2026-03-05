/* Name: Momin ali shaikh
SRN: 31251326
Practical 6

Student-Teacher Database. Consider the following Entities and their Relationships for Student-Teacher database.
Student (s_no int, s_name varchar (20), s_class varchar (10), s_addr varchar (30))
Teacher (t_no int, t_name varchar (20), qualification varchar (15), experience int)
Relationship between Student and Teacher is many to many with descriptive attribute subject.

Constraints: Primary Key, s_class should not be null.
*/

-- create database
CREATE DATABASE student_teacher_db;
USE student_teacher_db;

-- create table student
CREATE TABLE Student(
    s_no INT PRIMARY KEY,
    s_name VARCHAR(20),
    s_class VARCHAR(10) NOT NULL,
    s_addr VARCHAR(30)
);

-- create table teacher
CREATE TABLE Teacher(
    t_no INT PRIMARY KEY,
    t_name VARCHAR(20),
    qualification VARCHAR(15),
    experience INT
);

-- create relationship table
CREATE TABLE Student_Teacher(
    s_no INT,
    t_no INT,
    subject VARCHAR(20),
    PRIMARY KEY (s_no, t_no, subject),
    FOREIGN KEY (s_no) REFERENCES Student(s_no),
    FOREIGN KEY (t_no) REFERENCES Teacher(t_no)
);

-- inserting values
INSERT INTO Student VALUES
    (1, 'Avinash', 'SYBCA', 'Camp'),
    (2, 'Rohit', 'SYBCA', 'Kothrud'),
    (3, 'Shubham', 'FYBCA', 'Camp'),
    (4, 'Asha', 'TYBCA', 'Kothrud'),
    (5, 'Shalini', 'SYBCA', 'Camp');

INSERT INTO Teacher VALUES
    (101, 'Prof. Shriprada', 'Ph.D.', 12),
    (102, 'Prof. Kulkarni', 'M.Sc', 8),
    (103, 'Prof. Mehta', 'Ph.D.', 15);

INSERT INTO Student_Teacher VALUES
    (1, 101, 'DBMS'),
    (2, 101, 'DBMS'),
    (3, 102, 'OS'),
    (4, 103, 'DBMS'),
    (5, 103, 'CN');


-- 1. List the names of the teachers who are teaching to a student named "Avinash".
SELECT t.t_name
FROM Teacher t, Student s, Student_Teacher st
WHERE t.t_no = st.t_no
AND s.s_no = st.s_no
AND s.s_name = 'Avinash';

-- 2. List the names of the students to whom 'Prof. Shriprada' is teaching.
SELECT s.s_name
FROM Student s, Teacher t, Student_Teacher st
WHERE s.s_no = st.s_no
AND t.t_no = st.t_no
AND t.t_name = 'Prof. Shriprada';

-- 3. List the details of all teachers whose teaching subject is 'DBMS'.
SELECT DISTINCT t.*
FROM Teacher t, Student_Teacher st
WHERE t.t_no = st.t_no
AND st.subject = 'DBMS';

-- 4. Find the number of teachers having qualification as 'Ph.D.'.
SELECT COUNT(*) AS Total_Teachers
FROM Teacher
WHERE qualification = 'Ph.D.';

-- 5. Find the total number of students living in 'Camp'.
SELECT COUNT(*) AS Total_Students
FROM Student
WHERE s_addr = 'Camp';

-- 6. Find the details of maximum experienced teacher.
SELECT *
FROM Teacher
WHERE experience = (SELECT MAX(experience) FROM Teacher);

-- 7. Find the names of student of class 'SYBCA' and living at 'Kothrud'.
SELECT s_name
FROM Student
WHERE s_class = 'SYBCA'
AND s_addr = 'Kothrud';

-- 8. List name of students containing 'SH' characters in it.
SELECT s_name
FROM Student
WHERE s_name LIKE '%SH%';

-- 9. List the names of all teachers with their subjects along with the total number of students they are teaching.
SELECT t.t_name, st.subject, COUNT(st.s_no) AS Total_Students
FROM Teacher t, Student_Teacher st
WHERE t.t_no = st.t_no
GROUP BY t.t_name, st.subject;