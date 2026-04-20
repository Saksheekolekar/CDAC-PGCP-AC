package org.day08;

import java.util.Arrays;
import java.util.Scanner;

public class sort {
	static void LinearSearch(int arr[], int element) {
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] == element) {
				System.out.println("Element found at index" + i);
				return;
			}
		}
		System.out.println("element not found");
		return;
	}

	 static void insertionSort(int[] arr) {
		int n = arr.length;
		for (int i = 1; i < n; ++i) {
			int key = arr[i];
			int j = i - 1;

			while (j >= 0 && arr[j] < key) {
				arr[j + 1] = arr[j];
				j = j - 1;
			}
			arr[j + 1] = key;
		}
	}

	 static boolean isArraySorted(int[] arr) {
		int n = arr.length;

		if (n < 2)
			return true;

		for (int i = 0; i < n - 1; i++) {

			if (arr[i] > arr[i + 1]) {
				return false;
			}
		}

		return true;
	}

	static void binarySearch(int arr[], int element) {
		int n = arr.length, mid = 0;
		int low = 0, high = n - 1;

		while (low <= high) {
			mid = (low + high) / 2;
			if (arr[mid] == element) {
				System.out.println("Element found at position " + mid);
				return;
			} else if (element > arr[mid]) {
				low = mid + 1;
			} else {
				high = mid - 1;
			}
		}
		System.out.println("element not found!");
	}

	static void bubbleSort(int arr[]) {
		int n = arr.length;

		while (n > 1) {
			int left = 0, swapCount = 0;

			while (left < (n - 1)) {

				if (arr[left] < arr[left + 1]) {
					swapCount++;
					int temp = arr[left];
					arr[left] = arr[left + 1];
					arr[left + 1] = temp;
				}
				left++;
			}
			if (swapCount == 0) {
				System.out.println("Array is already sorted!!!!");
				return;
			}
			n--;
		}
	}

	public static void main(String[] args) {
		try (Scanner sc = new Scanner(System.in)) {
			System.out.println("Enter Element to find: ");
			int element = sc.nextInt();
			int[] array = { 20, 39, 12, 13, 60 };
			LinearSearch(array, element);
			bubbleSort(array);
			System.out.println("Sorted array in descendiing order:" + Arrays.toString(array));
		}
	}
}
