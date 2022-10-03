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
    vector<vector<int>> v; // works like 2d array with dynamic size
    int n;
    cout << "Enter Inirtial Size: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        cout << "Enter inirtial size of vector:";
        int size;
        cin >> size;
        for (int j = 0; j < size; j++)
        {
            int data;
            cout << "Enter data:";
            cin >> data;
            temp.push_back(data);
        }
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); i++)
    {
        print_vector(v[i]);
    }

    return 0;
}