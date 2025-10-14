package com.service;

import java.util.List;

import com.bean.Employee;

public interface EmployeeService {
	boolean addNewEmployee();

	List<Employee> displayAll();

	Employee findById(int eid);
	List<Employee> findByName(String name);

}
