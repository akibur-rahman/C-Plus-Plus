/*
The Boss Baby and Cookies

You maybe heard about "The Boss Baby" Movie. Jimbo is very fond of cookies. There are N type Cookies where A represent number of cookies of i-th type.

The Boss Baby gave Jimbo Q queries.

• 1 X-add X Cookies of new type.

2 K-If Jimbo chose at most K different type of cookies, what is the Maximum number of Cookies Jimbo could get.

Jimbo is worried. He wants you to solve the problem and help him to answer the queries.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int x;
            cin >> x;
            a.push_back(x);
            sort(a.begin(), a.end());
        }
        else
        {
            int k;
            cin >> k;
            int ans = 0;
            for (int i = 0; i < k; i++)
            {
                ans += a[i];
            }
            cout << ans << endl;
        }
    }
    return 0;
}