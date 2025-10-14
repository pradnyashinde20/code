package com.demo.test;
import java.util.*;

import com.demo.beans.Employee;
import com.demo.service.*;

public class TestEmpMgt {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int choice =0;
		do {
			System.out.println("1. add new employee\n2. display all");
			System.out.println("3. display by id \n4. change sal or charges");
			System.out.println("5. display salaried employee \n6. display contract employee");
			System.out.println("7. search by name \n8. calculate net salary \n9. exit \n choice :");
			
			choice = sc.nextInt();
			switch(choice) {
			case 1:
				System.out.println("1. salaried\n2. contarct\n3. vendor\n choice :");
				int ch = sc.nextInt();
				boolean status = EmployeeService.addNewEmployee(ch);
				if(status) {
					System.out.println("employee added successfully");
				}else {
					System.out.println("Error : not added");
				}
				break;
				
			case 2:
				 EmployeeService.displayAll();
				 break;
				 
			case 3:
				System.out.println("enter id");
				String id =sc.next();
				Employee e = EmployeeService.searchById(id);
				if(e!=null) {
					System.out.println(e);
				}else{
					System.out.println("not found");
				}
				break;
				
			case 4:
				System.out.println("enter id");
				id = sc.next();
				System.out.println("enter new sal/charges");
				double charges = sc.nextDouble();
				status = EmployeeService.modifyById(id, charges);
				if(status) {
					System.out.println("updated successfully");
				}else {
					System.out.println("not updated");
				}
				break;
			case 5:
				EmployeeService.desplayOnlySalariedEmp();
				break;
			case 6:
				EmployeeService.desplayOnlyContractEmp();
				break;
			case 7:
				System.out.println("enter name");
				String nm = sc.next();
				Employee res[] = 	EmployeeService.searchByname(nm);
				for(Employee data : res) {
					System.out.println(data);
				}
				break;
			case 8:
				System.out.println();
				break;
			case 9:
				System.out.println("thank u for visiting");
				sc.close();
				break;
			default:
				System.out.println("wrong choice");
				break;
			}
		}while(choice!=9);
		
	}
}
