#include <bits/stdc++.h>
using namespace std;

void print_vector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr[n];
    for (int i = 0; i < n; i++)
    {
        int size;
        cin >> size;
        for (int j = 0; j < n; j++)
        {
            int data;
            cin >> data;
            arr[i].push_back(data);
        }
    }
    for (int i = 0; i < n; i++)
    {
        print_vector(arr[i]);
    }

    return 0;
}