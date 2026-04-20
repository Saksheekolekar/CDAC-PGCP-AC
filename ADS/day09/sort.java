package org.day09;

import java.util.Arrays;
import java.util.Scanner;

public class sort {
	private static void heapSort(int[] array) {
		// TODO Auto-generated method stub

	}

	private static void quickSort(int[] array) {
		// TODO Auto-generated method stub

	}

	private static void mergeSort(int[] array) {
		// TODO Auto-generated method stub

	}

	public static void main(String[] args) {
		try (Scanner sc = new Scanner(System.in)) {
			System.out.println("Enter Element to find: ");
			int element = sc.nextInt();
			int[] array = { 20, 39, 12, 13, 60 };
			mergeSort(array);
			quickSort(array);
			heapSort(array);

			System.out.println("Sorted array in descendiing order:" + Arrays.toString(array));
		}
	}

}
