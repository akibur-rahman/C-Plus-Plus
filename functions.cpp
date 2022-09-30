#include <bits/stdc++.h>
using namespace std;

// Check Palindrome

bool palindrome(int number)
{
    int new_number = 0, old_number = number, remainder;
    while (old_number != 0)
    {
        remainder = old_number % 10;
        new_number = new_number * 10 + remainder;
        old_number = old_number / 10;
    }
    if (new_number == number)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << "Enter Number:";
    int number;
    cin >> number;
    bool isPalindrome = palindrome(number);
    if (isPalindrome == true)
    {
        cout << "The Number is a Palindrome Number." << endl;
    }
    else
    {
        cout << "The Number is not a Palindrome Number." << endl;
    }
    return 0;
}