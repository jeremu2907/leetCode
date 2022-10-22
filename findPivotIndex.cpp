class Solution {
#include <algorithm>
#include <cmath>
    public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(auto i : nums){
            sum += i;
        }
        
        int lsum = 0;
        int i;
        for(i = 0; i < nums.size(); i++){
            if((sum - nums[i])/2 == lsum){
                if(sum - nums[i] - lsum == lsum)
                return i;
            }
            lsum += nums[i];
        }
        
        return -1;
    }
};
