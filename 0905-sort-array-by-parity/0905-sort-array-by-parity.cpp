class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        if(n==1){
            return nums;
        }

        for(auto i: nums){
            if(i % 2 == 0){
                ans.push_back(i);
            }
        }
        for(auto i: nums){
            if(i % 2 != 0){
                ans.push_back(i);
            }
        }

        return ans;
    }
};