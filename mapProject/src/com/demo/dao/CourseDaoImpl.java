package com.demo.dao;

import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;
import java.util.TreeMap;
import java.util.TreeSet;

public class CourseDaoImpl implements CourseDao {
	 static Map<String,Integer>hm;
	 static {
		 hm= new HashMap<>();
		hm.put("DAC", 100);
		hm.put("DBDA", 70);
		hm.put("ML", 150);
	 }

	@Override
	public boolean save(String cname, int capacity) {
	    hm.put(cname, capacity);
		return true;
	}

	@Override
	public Map<String, Integer> findAll() {		
		return hm;
	}

	@Override
	public int serachByName(String cname) {
      if(hm.containsKey(cname)) {
      return hm.get(cname);
      }else {
    	  return -1;
      }
	}

	@Override
	public boolean modifyCourseCapacity(String cname, int ncap) {
		if(hm.containsKey(cname)) {
			hm.put(cname, ncap);
			return true;
		}
		return false;
	}

	@Override
	public Set<String> findByCourseByCapacity(int capacity) {
	Set<String>keys=hm.keySet();
	Set<String>cname=new HashSet<>();
	for(String s:keys)
	{
		if(hm.get(s)==capacity)
		{
			cname.add(s);
		}
	}
	if(cname.size()>0)
	{
		return cname;
	}
		return null;
	}

	@Override
	public boolean modifyCourseName(String ocname, String ncname) {
		if(hm.containsKey(ocname)) {
			int c = hm.remove(ocname);
			hm.put(ncname, c);
			return true;
		}
		return false;
	}

	@Override
	public Map<String, Integer> sortByName() {
		Map<String,Integer>tmap = new TreeMap<>();
		Set<String>keys=hm.keySet();
		for(String s:keys) {
			tmap.put(s, hm.get(s));
		}
		
		return tmap;
	}

	@Override
	public Set<Entry<String, Integer>> sortByCapacity() {
		Set<Map.Entry<String, Integer>>es = hm.entrySet();
		
		Comparator<Map.Entry<String,Integer>> c=(o1,o2)->{
			return o1.getValue()-o2.getValue();
		};
		Set<Map.Entry<String, Integer>> tset = new TreeSet<>(c);
		for(Map.Entry<String,Integer> s: es) {
			tset.add(s);
		}
		
		return tset;
	}

	@Override
	public boolean deleteByCourseName(String cname) {
	  Integer val = hm.remove(cname);
		return val!=null;
	}

	@Override
	public boolean deleteByCourseCapacity(int capacity) {
		int cnt=0;
		Set<String> keys=hm.keySet();
		Iterator<String>it = keys.iterator();
		while(it.hasNext()) {
			String s = it.next();
			if(hm.get(s)==capacity) {
				it.remove();
				cnt++;
			}
		}
		return cnt>0;
	}
	 
	
}
