/* not a good approach (pirs not in order here)
#include<iostream>
using namespace std;

void pairSum(int arr[], int n, int s)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == s)
            {
                if (arr[i] > arr[j])
                {
                    swap(arr[i], arr[j]);
                }
                cout << arr[i] << " " << arr[j]<<endl;
            }
        }
    }
}

int main(){
      int n;
    cout << "give array size";
    cin >> n;
    cout << "enter elements: ";
     int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int s;
    cin>>s;
    pairSum(arr,n,s);
}
*/

#include <iostream>
#include <vector>
#include <algorithm> // For sort
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s) {
    vector<vector<int>> ans;

    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == s) {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    int n;
    cout << "Give array size: ";
    cin >> n;

    cout << "Enter elements: ";
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int s;
    cout << "Enter the sum: ";
    cin >> s;

    vector<vector<int>> result = pairSum(arr, s);

    cout << "Pairs with sum " << s << " are:\n";
    for (const auto &pair : result) {
        cout << pair[0] << " " << pair[1] << "\n";
    }

    return 0;
}

