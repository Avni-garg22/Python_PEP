/*------------method 1(this approach is not good)

#include<iostream>
using namespace std;

void uniquee(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        // If count is 1, it means the element is unique
        if (count == 1) {
            cout << "Unique number: " << arr[i] << endl;
            return; // Exit once the unique number is found
        }
    }
}

int main() {
    int n;
    cout << "Enter size (must be 2m+1): ";
    cin >> n;

    // Validate if n is odd (2m+1)
    if (n % 2 == 0) {
        cout << "Size must be odd (2m+1)!" << endl;
        return 1;
    }

    int arr[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    uniquee(arr, n);

    return 0;
}


-----------------------------------------------*/
#include <iostream>
using namespace std;

int findUnique(int *arr, int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int n;
    cout << "give array size";
    cin >> n;
    cout << "enter elements: ";
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = findUnique(arr, n);
    cout << "The unique number is: " << ans << endl;
}
