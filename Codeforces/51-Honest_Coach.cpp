/**
 * Honest Coach
 * 10th of Jan 2024
 * @author : MOstafa Asaad 
*/
#define     DONE    1
#if         !DONE
#include <bits/stdc++.h>

using namespace std;

void solve();

int main(void)
{
    int t; cin >> t;
    while (t--)
        solve();
}

void solve() 
{
    int n; cin >> n;

    vector<int> s;
    for(int i = 0; i < n; ++i)
    {
        int temp; cin >> temp;
        s.push_back(temp);
    }

    sort(s.begin(), s.end());

    int l = 1, r = 2, min = s.at(1) - s.at(0);
    while (l < r && r < s.size())
    {
        if (s.at(r) - s.at(l) <= min)
        {
            min = s.at(r) - s.at(l);
            ++l, ++r;
        }
        else
            ++l, ++r;
    }
    cout << min << endl;
}
#endif