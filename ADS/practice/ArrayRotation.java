package org.practice;+

public class ArrayRotation {
    /**
     * Rotates array to the right by k steps in-place.
     * Time Complexity: O(n)
     * Space Complexity: O(1)
     */
    public void rotate(int[] nums, int k) {
        if (nums == null || nums.length < 2) return;
        
        int n = nums.length;
        k %= n; 
        if (k == 0) return;

        // Optimized reversal sequence
        reverse(nums, 0, n - 1);     // Entire array
        reverse(nums, 0, k - 1);     // First k elements
        reverse(nums, k, n - 1);     // Remaining n-k elements
    }

    private void reverse(int[] nums, int start, int end) {
        while (start < end) {
            // Bitwise XOR swap (Optional: avoids a temp variable, 
            // but usually JVM optimizes the temp version better)
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
}