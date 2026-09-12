#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    /* Function to find the length of the
    longest substring with at most k zeros */
    int longestOnes(vector<int>& nums, int k) {
        
        // Length of the input array
        int n = nums.size();
        
        // Pointers for sliding window approach
        int l = 0, r = 0;
        
        /* Variables to count zeros
        and store maximum length */
        int zeros = 0, maxLen = 0;
               
        /* Iterate through the array 
        using sliding window approach */
        while (r < n) {
            
            if(nums[r] == 0) zeros++;
            
            if (zeros > k) {
                if (nums[l] == 0) {
                    
                    /* Decrement zeros count
                    when moving left pointer */
                    zeros--; 
                }
                l++;
            }
            if(zeros <= k){
                /* Calculate the length 
                of current substring */
                int len = r - l + 1;
            
                /* Update maxLen if the current
                substring length is greater */
                maxLen = max(maxLen, len);
            }
            r++;  
        }
        
        // Return the maximum length
        return maxLen; 
    }
};
