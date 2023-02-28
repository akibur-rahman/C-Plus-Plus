// we have some built in algorithms in c++ stl. we will see some of them here
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[5] = {5, 1, 8, 3, 6};

    // we can find minumum element in a container by using min_element function. it takes starting and next to end pointer
    int min = *min_element(arr, arr + 5);
    cout << min << endl;
    // we can find max element in a container by max_element method
    int max = *max_element(arr, arr + 5);
    cout << max << endl;
    // accumulate lets us find sum of all the elements of a stl container
    int sum = accumulate(arr, arr + 5, 0); // it takes starting pointer, next to last pointer and an inirtial sum
    cout << sum << endl;

    // count function allows us to find count of a specific element
    int ct = count(arr, arr + 5, 1);
    cout << ct << endl;
    // find function allows us to find an element in an container and= it returns a pointer to that container
    cout << *find(arr, arr + 5, 2) << endl;
    // reverse method allows s to reverse an container
    reverse(arr, arr + 5); // takes starting and end pointer
    for (int element : arr)
    {
        cout << element << endl;
    }
    return 0;
}
