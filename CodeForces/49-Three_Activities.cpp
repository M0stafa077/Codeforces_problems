/**
 * Three Activities
 * Jan 7th 2024
 * @author : Mostafa Assad
*/

#define DONE    1
#if !DONE
#include <bits/stdc++.h>
 
using namespace std;

void solve()
{
    int n;
    cin >> n;
 
    vector<int> a(n), b(n), c(n);
    
    for(auto &e: a)     
        cin >> e;
    
    for(auto &e: b)     
        cin >> e;
    
    for(auto &e: c)     
        cin >> e;
 
    multiset<pair<int, int>> x, y;
 
    for(int i = 0; i < n; ++i)
    {
        x.insert({b[i], i});
        y.insert({c[i], i});
    }
 
    int ans = 0;
 
    for(int i = 0; i < n; ++i)
    {
        x.erase({b[i], i});
        y.erase({c[i], i});
 
        if((*x.rbegin()).second == (*y.rbegin()).second)
            ans = max({ans, a[i] + (*(--x.end())).first + (*(--(--y.end()))).first,
                      a[i] + (*(--y.end())).first + (*(--(--x.end()))).first});
        else
            ans = max(ans, a[i] + (*(--x.end())).first + (*(--y.end())).first);
 
        x.insert({b[i], i});
        y.insert({c[i], i});
    }
 
    cout << ans << endl;
    
}

int main()
{
    int test_cases; 
    cin >> test_cases; 
    
    while(test_cases--)
        solve();
    
}
#endif