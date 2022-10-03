#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v) //&v pass as referance, doesn't make a copy. to pass as a copy, simply we need to pass as v
{
    for (int i = 0; i < v.size(); i++) // we can know the size of the array(actual/filled elements in the vecotr) with vecotr_name.size() funcion
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v; // vector is an array with dynamic size. It doubles it's size when overflow. Template vecotr<data_type> vector name;
    // create vector
    int n;
    cout << "Enter size of vecotr:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int data;
        cout << "Enter Data: ";
        cin >> data;
        v.push_back(data); // we can add element in vecotr with push_back function at the end of the vector. time complexity O(1)
    }

    printVector(v);
    v.pop_back(); // pops last element of the vecotr
    printVector(v);
    vector<int> v2 = v; // vectors can be directly copied from one to another, time complexity O(n)
    v2.push_back(8);
    printVector(v2);
    return 0;
}