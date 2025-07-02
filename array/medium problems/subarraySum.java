import java.util.*;

class subarraySum {
    public static int subArraySum(int arr[], int n) {
        int max = Integer.MIN_VALUE;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int sum = 0;
                for (int k = i; k <= j; k++) { // <= j to include j
                    sum += arr[k];
                }
                max = Math.max(sum, max);
            }
        }

        return max;
    }

    public static void main(String[] args) {
        int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
        int n = arr.length;
        int maxSum = subArraySum(arr, n);
        System.out.println( maxSum);
    }
}
