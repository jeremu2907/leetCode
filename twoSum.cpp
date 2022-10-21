#include <unordered_map>
class Solution {

    public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> map;
        for(int i = 0; i < nums.size(); i++){
            if(map.find(nums[i]) == map.end()){
                map.insert({target - nums[i], i});
            }
            else{
                // vector<int> arr(2);
                // arr[0] = i;
                // auto it = map.find(nums[i]);
                // arr[1] = it->second;
                
                return {i, map.find(nums[i])->second};
            }
        }
        return vector<int>{0,0};
    }
};
