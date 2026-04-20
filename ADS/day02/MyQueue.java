package org.day02;

public class MyQueue implements Queue {

	private Implementation list;

	public MyQueue() {
		list = new Implementation();

	}

	@Override
	public void enqueue(int element) {
		// TODO Auto-generated method stub

		list.addAtEnd(element);

	}

	@Override
	public int dequeue() {
		if (list.isEmpty()) {
			System.out.println("List Is Empty!");
			return 0;
		}
		list.deleteFirst();
		return 0;
	}

	@Override
	public boolean isEmpty() {
		return list.isEmpty();
	}

//	@Override
//	public void print() {
//		list.print();
//		
//	}

	public static void main(String[] args) {
		MyQueue queue = new MyQueue();
		queue.enqueue(30);
		queue.enqueue(40);
		queue.enqueue(50);
		queue.enqueue(60);
		queue.enqueue(70);
		queue.enqueue(80);
		queue.list.print();
		queue.dequeue();
		queue.list.print();
		queue.dequeue();
		queue.list.print();

	}

}
