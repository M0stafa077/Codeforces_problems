/**
 * Container With Most Water
 * 11th of Jan 2024
 * @author : Mostafa Asaad
*/
#define  DONE   1
#if     !DONE
class Solution {
public:

    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int maxArea = 0;

        while (l < r)
        {
            int temp = (r - l) *  min(height.at(l), height.at(r));
            maxArea = max(maxArea, temp);

            if(height.at(l) < height.at(r))
                ++l;
            else
                --r;
        }
        return maxArea;
    }
};


#endif