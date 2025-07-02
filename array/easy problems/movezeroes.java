// import java.util.*;

// class movezeroes{

//     public static void moveZero(int arr[], int n){
//         int index=0;
// int []temp=new int[n];
//         for(int i=0;i<n;i++){
//             if(arr[i]!=0){
//                 temp[index++]=arr[i];
//             }
//         }

//        for(int i=0;i<n;i++){
//         arr[i]=temp[i];
//        }
//     }
//     public static void main(String [] args){
//         int arr[]={0,1,2,0,4,5,0};
//         int n=arr.length;
//         moveZero(arr,n);
       
//             System.out.println(Arrays.toString(arr));
        
//     }
// }

////////////optimal///////////////

import java.util.*;

class movezeroes {
    public static void moveZero(int nums[]) {
        int n = nums.length;
        int j = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                if (i != j) {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
                j++;
            }
        }
    }

    public static void main(String[] args) {
        int arr[] = {0, 1, 2, 3, 0, 9};
        moveZero(arr);
        System.out.println(Arrays.toString(arr));
    }
}
// Time Complexity: O(n)
// Space Complexity: O(1) - no extra space used for storing elements, just a few variables.
// The algorithm iterates through the array once, swapping non-zero elements to the front and counting