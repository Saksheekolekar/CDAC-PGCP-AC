package org.day01;

import java.util.Scanner;

public class Array01 {

	static int deleteFromPosition(int[] arr, int n, int pos) {
		if (pos == n - 1)
			return n - 1;
		else {
			for (int i = pos; i < n - 1; i++) {
				arr[i] = arr[i + 1];
				if(i==n-1)
					arr[i]=(Integer) null;
			}
			return n - 1;
		}
	}

	static void display(int[] arr, int size) {
		for (int i = 0; i < size; i++) {
			System.out.println(arr[i]);
		}
	}

	public static void main(String[] args) {
		int size = 0, position = 0;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Size OF Array:");
		size = sc.nextInt();
		int[] array = new int[size];
		System.out.println("enter Array Elements:");
		for (int i = 0; i < size; i++) {
			array[i] = sc.nextInt();
		}
		System.out.println("enter position to delete:");
		position = sc.nextInt();
        
		int newSize = deleteFromPosition(array, size, position);
		System.out.println("New Logical size is " + newSize);
		display(array, size);

	}
}
