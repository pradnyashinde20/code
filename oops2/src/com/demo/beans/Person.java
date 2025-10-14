package com.demo.beans;

import java.util.Date;

public class Person {
	static int scount,vcount,ccount;
	static {
		scount =0;
		ccount=0;
		vcount=0;	
	}
	private String pid;
	private String pname;
	private Date pdate;
	public Person() {
		System.out.println("in person default constructor");
	
		pid = generateId("s");
		pname = null;
		pdate = null;
		
	}
	public Person(String emptype, String pname, Date pdate) {
		super();
		System.out.println("in person para constructor");
		
		this.pid = generateId(emptype);
		this.pname = pname;
		this.pdate = pdate;
	}
	
	private String generateId(String emptype) {
		if(emptype.equals("s")) {
			scount++;
		   return emptype+scount;
		
		}
		else if(emptype.equals("c")) {
			ccount++;
			return emptype+ccount;
		}
		else if(emptype.equals("v")) {
			vcount++;
			return emptype+vcount;
		}
		return null;
	}


	public String getPid() {
		return pid;
	}
	public String getPname() {
		return pname;
	}
	public void setPname(String pname) {
		this.pname = pname;
	}
	public Date getPdate() {
		return pdate;
	}
	public void setPdate(Date pdate) {
		this.pdate = pdate;
	}
	@Override
	public String toString() {
		return "Person [pid=" + pid + ", pname=" + pname + ", pdate=" + pdate + "]";
	}
	

}
