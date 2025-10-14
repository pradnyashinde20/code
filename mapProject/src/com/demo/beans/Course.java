package com.demo.beans;

public class Course implements Comparable<Course>{
	private String courseName;
	private int courseCapacity;
	public Course() {
		super();
	}
	public Course(String courseName, int courseCapacity) {
		super();
		this.courseName = courseName;
		this.courseCapacity = courseCapacity;
	
	}
	public String getCourseName() {
		return courseName;
	}
	public void setCourseName(String courseName) {
		this.courseName = courseName;
	}
	public int getCourseCapacity() {
		return courseCapacity;
	}
	public void setCourseCapacity(int courseCapacity) {
		this.courseCapacity = courseCapacity;
	}
	
	@Override
	public String toString() {
		return "Course [courseName=" + courseName + ", courseCapacity=" + courseCapacity + "]";
	}
	@Override
	public int compareTo(Course o) {
	
		return this.courseName.compareTo(o.courseName);
	}
	
	
	
	
}
