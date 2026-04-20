package org.day02;

public class Implementation implements List {

	static Node head = null, tail = null;

	public void addFirst(int element) {
		Node newNode = new Node(element);
		if (isEmpty()) {
			head = tail = newNode;
			return;
		}
		newNode.next = head;
		head = newNode;

	}

	@Override
	public void addAtEnd(int element) {
		// TODO Auto-generated method stub
		Node newNode = new Node(element);
		if (isEmpty()) {
			head = tail = newNode;
			return;
		}
		tail.next = newNode;
		tail = newNode;

	}

	@Override
	public int deleteFirst() {
		if (isEmpty()) {
			return 0;
		}
		// h
		// 11 22 33
		int temp = head.data;
		head = head.next;
		return temp;
	}

	public static boolean isEmpty() {
		if (head == null)
			return true;
		return false;
	}

	@Override
	public void print() {

		if (isEmpty()) {
			System.out.print("List is empty");
		} else {
			Node temp = new Node();
			temp = head;
			while (temp != null) {

				System.out.print(temp.data + "\t");
				temp = temp.next;
			}
			System.out.println("\n");
		}
	}

	@Override
	public int deleteLast() {
		Node temp = new Node();

		if (isEmpty())
			return 0;

		temp = head;

		if (temp.next == null) {
			head = null;
			tail = null;
			return temp.data;
		}
		while (temp.next.next != null) {
			temp = temp.next;
		}

		int tempData = temp.next.data;
		tail = temp;
		tail.next = null;
		return tempData;
	}

	public void delete(int element) {

		if (isEmpty()) {
			System.out.println("List Is Empty!!!!");
			return;
		}

		Node current = head, previous = null;

		if (current.data == element) {
			System.out.println("Deleted Element is" + current.data);
			head = head.next;
			if (head == null) {
				tail = null;
			}
			return;
		}
		while (current != null) {
			if (current.data == element) {
				System.out.println("Deleted Element is" + current.data);

				previous.next = current.next;

				if (current == tail)
					tail = previous;
				return;
			}
			previous = current;
			current = current.next;
		}

		System.out.println("element not found!!!");
	}

	public void deleteAll(int element) {
		if (isEmpty()) {
			System.out.println("List Is Empty!!!!");
			return;
		}

		while (head != null && head.data == element) {
			System.out.println("Deleted Element is: " + head.data);
			head = head.next;

			if (head == null) {
				tail = null;
				return;
			}
		}

		Node current = head;
		Node previous = null;
		boolean found = false;

		while (current != null) {
			if (current.data == element) {
				System.out.println("Deleted Element is: " + current.data);

				previous.next = current.next;

				if (current == tail) {
					tail = previous;
				}

				current = current.next;
				found = true;
			} else {
				previous = current;
				current = current.next;
			}
		}

		if (!found && head != null) {
			System.out.println("Element not found!!!");
		}
	}

	public boolean search(int element) {
		Node current;
		current = head;
		if (isEmpty()) {
			System.out.println("Element  not found!!");
			return false;
		}
		while (current != null) {
			if (current.data == element) {
				return true;
			} else {
				current=current.next;
			}
		}
		return false;
	}

	public static void main(String[] args) {

		Implementation main = new Implementation();

		main.addFirst(7);
		main.addFirst(1);
		main.addAtEnd(8);
		main.addAtEnd(9);
		main.print();
		main.deleteFirst();
		main.print();
		main.deleteLast();
		main.print();
		main.delete(7);
		main.print();
		main.addAtPosition(34, 1);
		main.print();
	}

	@Override
	public void addAtPosition(int element, int index) {
		Node newNode = new Node(element);

		
		if (head == null) {
			if (index == 0) {
				head = tail = newNode;
			} else {
				System.out.println("Index out of bounds!");
			}
			return;
		}

		
		if (index == 0) {
			newNode.next = head;
			head = newNode;
			return;
		}

		
		int i = 0;
		Node current = head;
		Node previous = null;

		while (current != null) {
			if (i == index) {
				break;
			}
			i++;
			previous = current;
			current = current.next;
		}


		if (current == null) {
			if (i == index && previous != null) {
				previous.next = newNode;
				tail = newNode; 
				System.out.println("Index out of bounds!");
			}
			return;
		}

		previous.next = newNode;
		newNode.next = current;
	}
}
