package com.dao;

import java.util.ArrayList;
import java.util.List;

import com.beans.Employee;

public class EmployeeDaoImpl implements EmployeeDao {
	static List<Employee>lst;
	static {
lst=new ArrayList<>();
	}
	@Override
	public boolean save(Employee e) {
		// TODO Auto-generated method stub
		return lst.add(e);
	}
	@Override
	public List<Employee> displayAll() {
		// TODO Auto-generated method stub
		return lst;
	}
	@Override
	public Employee searchById(int id) {
		int pos=lst.indexOf(new Employee(id));
		if(pos!=-1)
		{
			return lst.get(pos);
		}
		return null;
	}

}
