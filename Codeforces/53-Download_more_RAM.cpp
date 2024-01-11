/**
 * Download More RAM
 * 11th of Jan 2024
 * @auther : Mostafa Asaad
*/
#define     DONE    1
#if         !DONE   

#include <bits/stdc++.h>
using namespace std;

void solve();
void getVector(vector<pair<int, int>> &v);
void ASC_sort(vector<pair<int, int>> &v);

int main(void)
{
    int t; cin >> t;
    while(t--)
        solve();
}

void solve()
{
    int n, k; 
    cin >> n >> k;

    vector<pair<int, int>> v(n);
    getVector(v);

    ASC_sort(v);

    int maxRam = k;
    for(int i = 0; i < v.size(); ++i)
    {
        if(maxRam >= v.at(i).first)
            maxRam += v.at(i).second;
        else
            break;
    }

    cout << maxRam << endl;
}

void getVector(vector<pair<int, int>> &v)
{
    for(int i = 0; i < v.size(); ++i)
    {
        int temp;
        cin >> temp;
        v.at(i).first = temp;
    }
    
    for(int i = 0; i < v.size(); ++i)
    {
        int temp;
        cin >> temp;
        v.at(i).second = temp;
    }
}

void ASC_sort(vector<pair<int, int>> &v)
{
    pair<int, int> key;
    int i, f_counter;
    for (f_counter = 1; f_counter < v.size(); ++f_counter)
    {
        key = v.at(f_counter);
        i = f_counter - 1;
        while (i >= 0 && v.at(i).first > key.first)
        {
            v.at(i + 1) = v.at(i);
            --i;
        }
        v.at(i + 1) = key;
    }
}
#endif