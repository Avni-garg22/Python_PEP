import java.util.*;

public class leftRotatejava {

    static void leftRotate(int[] arr, int n) {
        int temp = arr[0]; // store the first element

        // shift elements one by one to the left
        for (int i = 1; i < n; i++) {
            arr[i - 1] = arr[i];
        }

        arr[n - 1] = temp; // put first element at the end
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        int n = arr.length;

        leftRotate(arr, n);

        // print the array
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
