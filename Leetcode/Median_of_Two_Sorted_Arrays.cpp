#define     DONE    1
#if     !DONE
class Solution {
public:

    vector<int> merge(const vector<int>& arr1, const vector<int>& arr2) {
        vector<int> result;
        size_t i = 0; // Index for arr1
        size_t j = 0; // Index for arr2

        // Merge until one of the arrays is exhausted
        while (i < arr1.size() && j < arr2.size()) {
            if (arr1[i] < arr2[j]) {
                result.push_back(arr1[i]);
                i++;
            } else {
                result.push_back(arr2[j]);
                j++;
            }
        }

        // If there are remaining elements in arr1, append them to the result
        while (i < arr1.size()) {
            result.push_back(arr1[i]);
            i++;
        }

        // If there are remaining elements in arr2, append them to the result
        while (j < arr2.size()) {
            result.push_back(arr2[j]);
            j++;
        }

        return result;
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        // 1. Merge Two Vectors
        nums1 = merge(nums1, nums2);
        int size = nums1.size();

        if (size % 2 == 0)
        {
            int mid1 = nums1.at((size - 1) / 2);
            int mid2 = nums1.at(size / 2);

            return (mid1 + mid2) / 2.0;
        }
        else
        {
            return 1.0 * nums1.at(size / 2);
        }
    }
};
#endif