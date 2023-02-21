#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printVector(vector<int> v)
{
    // we can see the size of a vector with .size() method
    cout << "Size: " << v.size() << endl;
    cout << "Elements: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
}

int main(int argc, char const *argv[])
{
    // Vectors are similar to arrays but with dynamic size
    // we can declear vecotor with vector keyword and data type in angular baracket
    vector<int> v;
    int numberOfElemets;
    cin >> numberOfElemets;
    for (int i = 0; i < numberOfElemets; i++)
    {
        int element;
        cin >> element;
        // we can add elements in vector with.push_back() method. it will add an element into the vector with O(1) complexity
        v.push_back(element);
    }

    printVector(v);
    // we can pop last element from vector with pop_back() meothd
    v.pop_back();
    printVector(v);

    return 0;
}
