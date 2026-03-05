-- Create Database 
CREATE DATABASE library;
USE library;


-- publisher table
CREATE TABLE publisher(
	publisher_id INT PRIMARY KEY,
    name VARCHAR(50),
    city VARCHAR(30),
    country VARCHAR(30)
    );

-- Author table
CREATE TABLE author(
	author_id INT PRIMARY KEY,
    author_name VARCHAR(50),
    contact VARCHAR(15)
    );

-- book table
CREATE TABLE book(
	book_id INT PRIMARY KEY,
    title VARCHAR(50),
    price INT,
    publisher_year INT,
    publisher_id INT,
    FOREIGN KEY (publisher_id) REFERENCES publisher(publisher_id)
    );
    
CREATE TABLE book_author(
	book_id INT,
    author_id INT,
    PRIMARY KEY (book_id,author_id),
    FOREIGN KEY (book_id) REFERENCES book(book_id),
    FOREIGN KEY (author_id) REFERENCES author(author_id)
    );

INSERT INTO publisher VALUES
(1,'CRC Press','Mumbai','India'),
(2,'Oxford','Dpublisherelhi','India'),
(3,'Pearson','London','UK'),
(4,'McGraw Hill','New York','USA'),
(5,'Wiley','Berlin','Germany');

INSERT INTO author VALUES
(1,'John','9876543210'),
(2,'Smith','9876501234'),
(3,'Amit','9123456789'),
(4,'Rahul','9988776655'),
(5,'Neha','9090909090');

INSERT INTO Book VALUES
(101,'DBMS',250,2020,1),
(102,'Python',300,2021,2),
(103,'AI',150,2020,3),
(104,'IOT',90,2019,4),
(105,'Cloud',400,2022,5);

INSERT INTO Book_Author VALUES
(101,1),(102,2),(103,3),(104,4),(105,5);

-- 4. Verify data
SELECT * FROM book;










    

    
