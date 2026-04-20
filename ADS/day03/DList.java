package org.day03;

public interface DList {
	void addAtFront(int element);

	void addAtLast(int element);

	int deleteAtFirst();

	int deleteAtLast();

	void forwordTraverse();

	void backwordTraverse();

	boolean search(int element);

	void delete(int element);

	void deleteAll(int element);

	

}
