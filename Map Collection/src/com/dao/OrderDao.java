package com.dao;

import java.util.List;
import java.util.Map;

import com.beans.Customer;
import com.beans.Item;

public interface OrderDao {

	

	boolean save(Customer c, List<Item> lst);

	Map<Customer, List<Item>> display();

	boolean removeCustomer(int id);

}
