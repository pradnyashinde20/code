package com.dao;

import java.util.List;

import com.beans.Employee;

public interface EmployeeDao {

	boolean save(Employee e);

	List<Employee> displayAll();

	Employee searchById(int id);

}
