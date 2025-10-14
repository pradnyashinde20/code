package com.beans;

public class Item {
private int id;
private String iname;
private int qty;
private double price;
public Item() {
	super();
}
public Item(int id, String iname, int qty, double price) {
	super();
	this.id = id;
	this.iname = iname;
	this.qty = qty;
	this.price = price;
}
public int getId() {
	return id;
}
public void setId(int id) {
	this.id = id;
}
public String getIname() {
	return iname;
}
public void setIname(String iname) {
	this.iname = iname;
}
public int getQty() {
	return qty;
}
public void setQty(int qty) {
	this.qty = qty;
}
public double getPrice() {
	return price;
}
public void setPrice(double price) {
	this.price = price;
}
@Override
public String toString() {
	return "Item [id=" + id + ", iname=" + iname + ", qty=" + qty + ", price=" + price + "]";
}

}
