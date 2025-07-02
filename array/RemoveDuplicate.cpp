#include <bits/stdc++.h>
using namespace std;

int removeDuplicate(int arr, int N)
{
    int i = 0;

    for (int j = 1; j < N; j++)
    {
        if (arr[i] != arr[j])
        {

            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}
int main()
{
    int N;
    cin >> N;
    int arr[];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int K = removeDuplicate(arr, N);
    for (int i = 0; i < K; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}