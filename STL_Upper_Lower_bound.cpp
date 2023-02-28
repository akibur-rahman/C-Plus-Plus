#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // Upper bound and lower bound are functions that returns pointers
    int arr[5] = {5, 6, 3, 6, 7};
    // it works of sorted containers
    sort(arr, arr + 5);
    // Lower bound return she element. if the element is not present. it returns next element
    int *lbPointer = lower_bound(arr, arr + 5, 4); // lower bound takes 3 parameter, begining pointer, next of end pointer and value
    cout << (*lbPointer) << endl;
    int *ubPointer = upper_bound(arr, arr + 5, 3); // upper bound returns the next big number
    cout << (*ubPointer) << endl;
    return 0;
}
