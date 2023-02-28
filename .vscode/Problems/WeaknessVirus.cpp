
// A new form of virus was discovered that could infect digital systems and corrupt data.This virus was unlike anything the world had seen before, and it spread quickly, causing chaos and destruction wherever it went.

//                                                                                                                                                                                        in a state of panic,
//     and no one knew how to stop it.

//      In order to prevent the infection,
//     you must write a program that will alert you to the system's weak data.

//     Input Format

//         The first line contains the length of the input string,
//     integer N(1 << 10).

//         The second line contains a string S of N characters

//         Constraints

//         The input string will have at most length 104

//         Output Format

//         A string indicating whether the input string is a "Weak Data" or
//         "Strong Data".

//         Sample Input 0

//         11

//         hello world

//         Sample Output 0

//         Weak Data

//         Explanation 0

//         Here,
//     the first line contains the length of the string, which is 11. The second line contains the actual string "hello world".In this case, since the input string does not contain any numeric characters, the program will output "Weak Data"

#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{

    int size;
    cin >> size;
    string input;
    // add method to take string with spaces
    cin.ignore();
    getline(cin, input);
    int flag = 0;

    for (int i = 0; i < size; i++)
    {
        if (isdigit(input[i]))
        {
            flag = 1;
            break;
        }
    }
    // add condition if there is * or # in the string then flag = 1
    for (int i = 0; i < size; i++)
    {
        if (input[i] == '*' || input[i] == '#')
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "Strong Data";
    }
    else
    {
        cout << "Weak Data";
    }
    return 0;
}
