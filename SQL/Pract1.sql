-- Practical 1: Case study on practical SQL learning using hacker rank
-- Create the Database
CREATE DATABASE IF NOT EXISTS City;
USE City;

-- Create the Table

CREATE TABLE IF NOT EXISTS city (
    ID int, 
    Name varchar(17), 
    Country_code varchar(3), 
    District varchar(20), 
    Population int
);

-- Verify the table exists
DESCRIBE city;
