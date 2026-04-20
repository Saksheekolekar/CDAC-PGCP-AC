package org.day02;

public class MyStack implements Stack {
	Implementation list;

	public MyStack(Implementation list) {
		this.list = list;
	}

	@Override
	public void push(int element) {
		// TODO Auto-generated method stub
		list.addAtEnd(element);

	}

	@Override
	public int pop() {
		// TODO Auto-generated method stub
		if (list.isEmpty()) {
			System.out.println("Stack is Empty!!!!");
			return 0;
		}
		int removed = list.deleteLast();
		System.out.println("Removed Element is " + removed);
		return removed;
	}

	@Override
	public boolean isEmpty() {
		return list.isEmpty();
	}

	public static void main(String[] args) {
		MyStack stack = new MyStack(new Implementation());
		stack.push(10);
		stack.push(20);
		stack.push(30);
		stack.push(40);
		stack.push(50);
		stack.print();
		stack.pop();
	    stack.print();
	    stack.pop();
	    stack.print();
	}

	@Override
	public void print() {
		// TODO Auto-generated method stub
		list.print();
	}
}
