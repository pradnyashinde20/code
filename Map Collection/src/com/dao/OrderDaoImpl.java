package com.dao;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import com.beans.Customer;
import com.beans.Item;

public class OrderDaoImpl implements OrderDao{

	 static Map<Customer,List<Item>>list;
	 static {
		 list=new HashMap<>();
		 Customer c1=new Customer(1,"pooja","2436387575");
		 List<Item>li=new ArrayList<>();
		 li.add(new Item(1,"chair",34,45376));
		 list.put(c1, li);
	 }

	@Override
	public boolean save(Customer c, List<Item> lst) {
		if(!list.containsKey(c))
		{
			list.put(c, lst);
			return true;
		}
		
			
	
		return false;
	}

	@Override
	public Map<Customer, List<Item>> display() {
		
		return list;
	}

	@Override
	public boolean removeCustomer(int  id) {
	
		return false;
		
	}

	
	
	
	

}
