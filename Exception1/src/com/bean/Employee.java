package com.bean;

import com.exception.NegativeSalaryException;

public class Employee {
private  int id;
private String name;
private Double salary;
public Employee() {
	super();
}
public Employee(int id, String name, Double salary) {
	super();
	this.id = id;
	this.name = name;
	this.salary = salary;
}
public int getId() {
	return id;
}
public void setId(int id) {
	this.id = id;
}
public String getName() {
	return name;
}
public void setName(String name) {
	this.name = name;
}
public Double getSalary() {
	return salary;
}
@Override
public String toString() {
	return "Employee [id=" + id + ", name=" + name + ", salary=" + salary + "]";
}

}
