#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printVectorPair(vector<pair<int, string>> &v)
{
    // we can see the size of a vector with .size() method
    cout << "Size: " << v.size() << endl;
    cout << "Elements: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }

    cout << endl;
}

void printVector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    // we can creates complex data types inside vector as well such as pair
    vector<pair<int, string>> v = {
        {1, "hello"},
        {2, "World"},
        {3, "Test"},
    };
    printVectorPair(v);

    // also we can create nested vector

    vector<vector<int>> vec;

    int N;
    cout << "Enter the number of columns: ";
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        vector<int> temp;
        int n;
        cout << "Enter number of Elements:";
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int element;
            cin >> element;
            temp.push_back(element);
        }
        vec.push_back(temp);
    }

    for (int i = 0; i < vec.size(); i++)
    {
        printVector(vec[i]);
    }

    return 0;
}
