CREATE DATABASE college2;
USE college2;

CREATE TABLE student(
    id INT PRIMARY KEY,
    name VARCHAR(50)
);

insert INTO student
VALUES
(101, "Adam"),
(102, "Bob"),
(103, "Casey");

CREATE TABLE course(
    id INT PRIMARY KEY,
    course VARCHAR(50)
);

INSERT INTO course
VALUES
(102, "English"),
(105, "Maths"),
(103, "Science"),
(107, "Computer Science");


SELECT * FROM student;
SELECT * FROM course ;

/* INNER JOIN */
SELECT * 
FROM student
INNER JOIN course
ON student.id = course.id;


/* LEFT JOIN */
SELECT * 
FROM student
LEFT JOIN course
ON student.id = course.id;

/* RIGHT JOIN */
SELECT * 
FROM student
RIGHT JOIN course
ON student.id = course.id;

/* FULL JOIN */
SELECT * 
FROM student
LEFT JOIN course
ON student.id = course.id
UNION
SELECT * 
FROM student
RIGHT JOIN course
ON student.id = course.id;


/* SELF JOIN */
SELECT * 
FROM student as a
JOIN student as b
ON a.id = b.manager_id;

/* Cartesian Join OR Cross Join  */
SELECT * 
FROM student
CROSS JOIN course;


SELECT student.name, course.course 
FROM student
CROSS JOIN course;