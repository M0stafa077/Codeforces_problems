/**
 * Minimal Square
 * 11th of Jan 2024
 * @author : Mostafa Assad
*/
#define     DONE    1
#if         !DONE    

#include <bits/stdc++.h>

using namespace std;

void solve();

int main()
{
    int t; cin >> t;
    while(t--)
        solve();

    return 0;
}

void solve ()
{
    int a, b;
    cin >> a >> b;

    int min = a < b ? a : b;
    int max = a > b ? a : b;

    if (2 * min > max)
        cout << pow(2 * min, 2) << endl;
    else
        cout << pow(max, 2) << endl;
}

#endif