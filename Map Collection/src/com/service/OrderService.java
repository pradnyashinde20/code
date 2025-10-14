package com.service;

import java.util.List;
import java.util.Map;

import com.beans.Customer;
import com.beans.Item;

public interface OrderService {

	boolean addNewCustomer();

	Map<Customer, List<Item>> displayAll();

	boolean deleteCustomer(int id);

	

}
