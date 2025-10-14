package com.beans;

import java.time.LocalDate;

public class Student {
	private int id;
	private String name;
	private int marks;
	private LocalDate d;
	public Student() {
		super();
	}
	public Student(int id, String name, int marks, LocalDate d) {
		super();
		this.id = id;
		this.name = name;
		this.marks = marks;
		this.d = d;
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
	public int getMarks() {
		return marks;
	}
	public void setMarks(int marks) {
		this.marks = marks;
	}
	public LocalDate getD() {
		return d;
	}
	public void setD(LocalDate d) {
		this.d = d;
	}
	@Override
	public String toString() {
		return "Student [id=" + id + ", name=" + name + ", marks=" + marks + ", d=" + d + "]";
	}

}
