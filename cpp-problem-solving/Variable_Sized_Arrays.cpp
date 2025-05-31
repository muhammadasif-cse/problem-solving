#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr_size, query_size;
    cin >> arr_size >> query_size;

    int *arr[1000000];
    

    for (int i = 0; i < arr_size; i++)
    {
        int n;
        cin >> n;

        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < query_size; i++)
    {
        int arr_idx, arr_value;
        cin >> arr_idx >> arr_value;
        cout << arr[arr_idx][arr_value] << endl;
    }

    for (int i = 0; i < arr_size; i++)
    {
        delete[] arr[i];
    }

    return 0;
}