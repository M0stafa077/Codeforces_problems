/**
 * Sum In Binary Tree
 * 11th of Jan 2024
 * @author : Mostafa Asaad 
*/
#define DONE    1
#if     !DONE    

#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

void solve(void);
ull process(ull n);

int main(void)
{
    int t; cin >> t;
    while(t--)
        solve();
}

void solve(void)
{
    ull num; 
    cin >> num;

    cout << process(num) << endl;
}

ull process(ull n)
{
    if(1 == n)
        return 1;

    return n + process(floor(n / 2)); 
}
#endif