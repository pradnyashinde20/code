package com.beans;

public class Mythread2 implements Runnable{
	private int n;
	private int n2;
	private Info2 f2;
	public Mythread2(int n, int n2, Info2 f2) {
		super();
		this.n = n;
		this.n2 = n2;
		this.f2 = f2;
	}
	@Override
	public void run() {
		// TODO Auto-generated method stub
		int ans=f2.sub(20, 10);
		System.out.println("substraction::"+ans);
	}
	
	

}
