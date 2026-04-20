package org.day03;

public class DoublyLinkList implements DList {
	private static Node head = null;
	private Node tail = null;

	@Override
	public void addAtFront(int element) {
		Node newNode = new Node(element);
		if (isEmpty()) {
			tail = newNode;
		} else {
			head.previous = newNode;
		}
		newNode.next = head;
		head = newNode;
		// TODO Auto-generated method stub

	}

	@Override
	public void addAtLast(int element) {
		// TODO Auto-generated method stub
		Node newNode = new Node(element);
		if (isEmpty()) {
			head = tail = newNode;
			return;
		}
		tail.next = newNode;
		newNode.previous = tail;
		tail = newNode;

	}

	@Override
	public int deleteAtFirst() {
		// TODO Auto-generated method stub
		Node current;

		if (isEmpty())
			return 0;
		current = head;
		head = head.next;
		if (isEmpty())
			tail = null;
		else
			head.previous = null;
		return current.data;
	}

	@Override
	public int deleteAtLast() {
		// TODO Auto-generated method stub
		Node current;

		if (isEmpty())
			return 0;
		current = tail;
		tail = tail.previous;
		if (tail == null)
			head = null;
		else
			tail.next = null;
		return current.data;
	}

	public static boolean isEmpty() {
		if (head == null)
			return true;
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public void forwordTraverse() {
		// TODO Auto-generated method stub
		Node current;
		current = head;
		System.out.println("DoublyLL IN fORWORD manner:");
		while (current != null) {
			System.out.print("\t" + current.data);
			current = current.next;
		}
		System.out.println();
	}

	@Override
	public void backwordTraverse() {
		// TODO Auto-generated method stub
		Node current;
		current = tail;
		System.out.println("DoublyLL IN BackWord manner:");
		while (current != null) {
			System.out.print("\t" + current.data);
			current = current.previous;
		}
		System.out.println();
	}

	@Override
	public boolean search(int element) {
		// TODO Auto-generated method stub
		Node current;
		current = head;
		while (current != null) {
			if (current.data == element)
				return true;
			else
				current = current.next;
		}
		return false;
	}

	@Override
	public void delete(int element) {
		// TODO Auto-generated method stub
		Node currentNode;
		currentNode = head;
		while (currentNode != null) {
			if (currentNode.data == element) {
				currentNode.previous.next = currentNode.next;
				currentNode.next.previous = currentNode.previous;
				return;
			} else
				currentNode = currentNode.next;
		}
		return;

	}

	@Override
	public void deleteAll(int element) {
		Node currentNode;
		currentNode = head;
		while (currentNode != null) {
			if (currentNode.data == element) {
				currentNode.previous.next = currentNode.next;
				currentNode.next.previous = currentNode.previous;
			} else
				currentNode = currentNode.next;
		}
	}

	public static void main(String[] args) {
		DoublyLinkList dll = new DoublyLinkList();
		dll.addAtFront(40);
		dll.addAtFront(30);
		dll.addAtFront(50);
		dll.addAtLast(80);
		dll.addAtLast(33);

		dll.forwordTraverse();
		dll.backwordTraverse();

		dll.deleteAtFirst();
		dll.forwordTraverse();

		dll.deleteAtFirst();
		dll.forwordTraverse();

		dll.deleteAtLast();
		dll.forwordTraverse();

	}

}
