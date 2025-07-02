#include <iostream>
#include <vector>
#include <algorithm> // For sort
using namespace std;

vector<vector<int>> tripletSum(vector<int> &arr, int s) {
    vector<vector<int>> ans;

    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            for (int k = j + 1; k < arr.size(); k++) {
                if (arr[i] + arr[j] + arr[k] == s) {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    ans.push_back(temp);
                }
            }
        }
    }
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

    vector<vector<int>> result = tripletSum(arr, s);

    cout << "Triplets with sum " << s << " are:\n";
    for (const auto &triplet : result) {
        cout << triplet[0] << " " << triplet[1] << " " << triplet[2] << "\n";
    }

    return 0;
}

