-- Active: 1719169502593@@127.0.0.1@3306@college
CREATE DATABASE college; 
USE college;
 
CREATE TABLE student(
	id INT PRIMARY KEY,
    name VARCHAR(50),
    age INT NOT NULL
);
 
INSERT INTO student VALUES(1, "AMAN", 26);
INSERT INTO student VALUES(2, "RAMAN", 24);
 
SELECT * FROM student;
DROP TABLE student;
 
 
 
 
CREATE TABLE student(
	rollno INT PRIMARY KEY,
    name VARCHAR(50)
);
 
SELECT * FROM student;
 
INSERT INTO student 
(rollno, name)
VALUES
(101, "KARAN"),
(102, "ARJUN");
 
DROP TABLE student;
 
 
INSERT INTO student VALUES(1, "AMAN", 26);
 
 
CREATE TABLE student (
	rollno INT PRIMARY KEY, 
    name VARCHAR(50),
    marks INT NOT NULL,
    grade VARCHAR(1),
    city VARCHAR(20)
);
 
INSERT INTO student
(rollno, name, marks, grade, city)
VALUES
(101, "anil", 78, "C", "Pune"),
(102, "bhumika", 93, "A", "Mumbai"),
(103, "chetan", 85, "B", "Mumbai"),
(104, "dhruv", 96, "A", "Delhi"),
(105, "emanuel", 12, "F", "Delhi"),
(106, "farah", 82, "B", "Delhi");
 
SELECT name, marks FROM student;
SELECT * from student;
 
/*Distinct*/
SELECT DISTINCT(city) FROM student;
 
SELECT * 
FROM student
WHERE marks>80;                                            
 
/*BETWEEN, AND*/
SELECT * 
FROM student
WHERE marks BETWEEN 80 AND 90;
 
/*IN*/
SELECT * 
FROM student
WHERE city IN ("Mumbai", "Delhi");
 
/*NOT IN*/
SELECT * 
FROM student
WHERE city NOT IN ("Mumbai", "Delhi");
 
/*LIMIT*/
SELECT * 
FROM student
WHERE marks > 74
LIMIT 2;
 
 
/*ORDER BY ASC, DESC*/
SELECT * FROM student ORDER BY marks DESC LIMIT 5;
SELECT * FROM student ORDER BY city DESC;
 
/*MAX, AVG, COUNT, MIN, SUM*/
SELECT MAX(marks) from student;
SELECT AVG(marks) from student;
 
SELECT name, marks 
from student 
where marks > (select avg(marks) from student) ;

SELECT city, COUNT(name)
FROM student
GROUP BY city;

SELECT city, AVG(marks)
FROM student
GROUP BY city;


/*Average marks in each city in ascending order*/

SELECT city , AVG(marks) as ag
FROM student
GROUP BY city
ORDER BY ag DESC;

SELECT city , AVG(marks)
FROM student
GROUP BY city
ORDER BY AVG(marks) DESC;

/*Sample Question: Find total payment according to each payment method */
SELECT mode, COUNT(customer)
FROM payment
GROUP BY mode 


SELECT grade, COUNT(grade)
FROM student
GROUP BY grade
ORDER BY grade;



/* Having Clause */
SELECT COUNT(name), city, AVG(marks) 
FROM student
GROUP BY city
HAVING AVG(marks)>65;

SELECT city, COUNT(name), AVG(marks)
FROM student
WHERE grade = 'A'
GROUP BY city
HAVING AVG(marks) > 8
ORDER BY city;

SELECT city, AVG(marks), COUNT(name)
FROM student
GROUP BY city;

/*
    General Order of execution:

    SELECT column(s)
    FROM table_name
    WHERE condition
    GROUP BY column(s)
    HAVING condition
    ORDER BY column(s) ASC;
*/



/* UPDATE command */
UPDATE student
SET grade = 'O'
WHERE grade = 'A';


UPDATE student
set grade = 'B'
WHERE marks BETWEEN 80 AND 90;

UPDATE student
set marks = marks + 1;



/* DELETE command */
DELETE FROM student
WHERE rollno = 106;







/* Foerign Key */
CREATE TABLE dept(
    id INT PRIMARY KEY,
    name VARCHAR(50)
);

CREATE TABLE teacher(
    id INT PRIMARY KEY,
    name VARCHAR(50),
    dept_id INT,
    FOREIGN KEY (dept_id) REFERENCES dept(id)
);


INSERT INTO dept
VALUES
(101, "English"),
(102, "IT");

INSERT INTO teacher
VALUES
(101, "Adam", 101),
(102, "Eve", 102);

SELECT * FROM dept;
SELECT * FROM teacher;


/* Print from two tables using foreign keys */
SELECT t.name, d.name 
FROM dept d, teacher t
WHERE t.dept_id = d.id;


/* Alter Table (Add, Delete, Rename, Change, Modify) */

/* ADD column */
ALTER TABLE student
ADD COLUMN age INT NOT NULL DEFAULT 11;

/* MODIFY column */
ALTER TABLE student
MODIFY age VARCHAR(2);

/* CHANGE column(rename)*/
ALTER TABLE student
CHANGE age stu_age INT;

/* DROP column */
ALTER TABLE student
DROP COLUMN stu_age;

/* RENAME table */
ALTER TABLE student
RENAME TO stud;
ALTER TABLE stud
RENAME TO student;


ALTER TABLE teacher
ADD age INT DEFAULT 11;

ALTER TABLE teacher
DROP COLUMN age;

TRUNCATE TABLE teacher;


ALTER TABLE student
CHANGE name full_name VARCHAR(50);

SELECT * FROM student;


SELECT rollno, full_name 
FROM student
WHERE rollno%2=0;

/* SubQuery */
SELECT full_name, rollno
FROM student
WHERE rollno IN (
    SELECT rollno
    FROM student
    WHERE rollno%2=0
)


/* Find max marks from student of delhi using SubQuery */ 
SELECT MAX(marks)
FROM (
    SELECT *
    FROM student
    WHERE city='Delhi'
) as temp; /* We need to give alias when using sub query in FROM */



/* VIEW */

CREATE VIEW view1 AS
SELECT rollno, full_name, marks
FROM student;

SELECT * FROM view1;



SELECT * FROM student as s
CROSS JOIN student;



/* Set first character as capital */
UPDATE student
SET name = CONCAT( UPPER(LEFT(name, 1)), SUBSTRING(name, 2));


SELECT * 
FROM student
WHERE name LIKE 'D__U%'

SELECT *
FROM student
ORDER BY marks DESC
LIMIT 4;


SELECT * 
FROM (
    SELECT *
    FROM student
    ORDER BY marks DESC
    LIMIT 4
)
AS temp
ORDER BY marks ASC
LIMIT 1;

Select MAX(marks) from student limit 1;


SELECT * 
FROM student
GROUP BY marks
ORDER BY marks DESC
LIMIT 1,1


CONCAT('', '')
LEFT('apple', 1) = 'a'
RIGHT('apple',1) = 'e'

SUBSTRING('apple', 2) = 'pple'