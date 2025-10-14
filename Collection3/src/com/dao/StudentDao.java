package com.dao;

import java.util.Set;

import com.beans.Student;

public interface StudentDao {

	boolean save(Student s);

	Set<Student> display();

	Student searchById(int id);

}
