/**
 * Remove Smallest
 * 10 Jan 2024
 * @author : Mostafa Asaad
*/
#define DONE    1
#if     !DONE

#include <bits/stdc++.h>
#include <vector>

using namespace std;

/* Section : Functions Declaration */

void ASC_sort(vector<int> &a);
void DSC_sort(vector<int> &delta);
void solve();

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}

/* Section : Functions Definitions */
void ASC_sort(vector<int> &a)
{
    int key, i, f_counter;
    for (f_counter = 1; f_counter < a.size(); ++f_counter)
    {
        key = a.at(f_counter);
        i = f_counter - 1;
        while (i >= 0 && a.at(i) > key)
        {
            a.at(i + 1) = a.at(i);
            --i;
        }
        a.at(i + 1) = key;
    }
}

void DSC_sort(vector<int> &delta)
{
    int key, i, f_counter;
    for (f_counter = 1; f_counter < delta.size(); ++f_counter)
    {
        key = delta.at(f_counter);
        i = f_counter - 1;
        while (i >= 0 && delta.at(i) < key)
        {
            delta.at(i + 1) = delta.at(i);
            --i;
        }
        delta.at(i + 1) = key;
    }
}

void solve()
{
    int n; cin >> n;
    
    vector<int> a;
    for(int i = 0; i < n; ++i)
    {
        int temp; cin >> temp;
        a.push_back(temp);
    }
    
    ASC_sort(a);
    
    if(1 == n)
    {
        cout << "YES" << endl;
        return;
    }

    int diff = 0;
    vector <int> delta;
    for(int i = 1; i < a.size(); ++i)
    {
        diff = abs(a.at(i) - a.at(i - 1));
        delta.push_back(diff);
    }    

    // sort(delta.begin(), delta.end(), greater<int>());
    DSC_sort(delta);

    if (delta.at(0) > 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;  
}
#endif