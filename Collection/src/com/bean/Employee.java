package com.bean;

import java.time.LocalDate;

public class Employee {
	private int empid;
	private String empname;
	private double sal;
	private LocalDate d;
	public Employee() {
		super();
		// TODO Auto-generated constructor stub
	}
	public Employee(int empid, String empname, double sal, LocalDate d) {
		super();
		this.empid = empid;
		this.empname = empname;
		this.sal = sal;
		this.d = d;
	}
	public Employee(int empid) {
		super();
		this.empid = empid;
	}
	public boolean equals(Object obj)
	{
		System.out.println("in equals metoh"+this.empid+"---"+((Employee)obj).empid);
		return this.empid==((Employee)obj).empid;
	}
	public int getEmpid() {
		return empid;
	}
	public void setEmpid(int empid) {
		this.empid = empid;
	}
	public String getEmpname() {
		return empname;
	}
	public void setEmpname(String empname) {
		this.empname = empname;
	}
	public double getSal() {
		return sal;
	}
	public void setSal(double sal) {
		this.sal = sal;
	}
	public LocalDate getD() {
		return d;
	}
	public void setD(LocalDate d) {
		this.d = d;
	}
	@Override
	public String toString() {
		return "Employee [empid=" + empid + ", empname=" + empname + ", sal=" + sal + ", d=" + d + "]";
	}
	

}
