#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n = 10;
    int arr[n] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    sort(arr, arr + n); // in build sort function takes 2 parameter, starting pointer and nexxt of the last pointer

    for (int element : arr)
    {
        cout << element << endl;
    }

    vector<int> v = {4, 3, 5, 72, 2335, 3648, 23, 3, 78};
    sort(v.begin(), v.end()); // iterators are pointers and can be directly implemented here
    for (int element : v)
    {
        cout << element << endl;
    }

    return 0;
}
