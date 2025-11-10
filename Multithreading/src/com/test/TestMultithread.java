package com.test;

import com.beans.Info;
import com.beans.Info2;
import com.beans.Mythread;
import com.beans.Mythread2;

public class TestMultithread {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
Info f=new Info();
Info2 i=new Info2();
Mythread m1=new Mythread(f);
m1.start();
Mythread m2=new Mythread(f);
m2.start();
Mythread m3=new Mythread(f);
m3.start();
Mythread m4=new Mythread(10,4,f);
m4.start();
Mythread2 m5=new Mythread2(20,10,i);
Thread th=new Thread(m5);
th.start();

	}

}
