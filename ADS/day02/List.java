package org.day02;

public interface List {

	void addFirst(int element);

	void addAtEnd(int element);

	int deleteFirst();

	int deleteLast();

//	boolean isEmpty();
	void addAtPosition(int element,int index);
	

	void delete(int element);

	void deleteAll(int element);

	boolean search(int element);

	void print();
}
