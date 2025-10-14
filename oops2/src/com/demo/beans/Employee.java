package com.demo.beans;

import java.util.Date;

public class Employee extends Person {
	private String dept;
	private String desg;
	public Employee() {
		super();
		System.out.println("in employee sefault constructor");
	}
	public Employee(String emptype, String pname, Date pdate,String dept, String desg) {
		super(emptype,pname,pdate);
		System.out.println("in employee para constructor");
		
		this.dept = dept;
		this.desg = desg;
	}
	public String getDept() {
		return dept;
	}
	public void setDept(String dept) {
		this.dept = dept;
	}
	public String getDesg() {
		return desg;
	}
	public void setDesg(String desg) {
		this.desg = desg;
	}
	@Override
	public String toString() {
		return super.toString()+"Employee [dept=" + dept + ", desg=" + desg + "]";
	}
	
	

}
