/**
 * 907. Sum of Subarray Minimums
 * Jan 21th 2024
 * @author : Mostafa Asaad
*/
#define DONE    1
#if     !DONE

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector <int> vec;
    int sum = 0, arrSize = 4;
    vector <int> arr = { 3, 1, 2, 4 };

    for(int j = 0; j < arrSize; ++j)
    {
        for(int i = j; i < arrSize; ++i)
        {
            if(vec.empty()) { vec.push_back(arr.at(i)); }
            else
            {
                int tempMini = vec.back();
                tempMini = (arr.at(i) < tempMini) ? (arr.at(i)) : (tempMini);
                vec.push_back(tempMini);
            }
        }
        int temp;
        while (!vec.empty())
        {
            temp = vec.back();
            vec.pop_back();
            sum += temp;
        }
    }
    cout << sum << '\n';
}
#endif