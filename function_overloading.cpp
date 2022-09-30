#include <bits/stdc++.h>
using namespace std;

// With Function overloading, we can use multiple functions with same name. The program will detect the function by it's parameter

int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    int a = 5, b = 6, c = 7;
    cout << sum(a, b) << endl;
    cout << sum(a, b, c) << endl;
    return 0;
}