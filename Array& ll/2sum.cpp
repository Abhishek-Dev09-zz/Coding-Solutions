#Problem url- https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for(int i=0; i<nums.size();i++){
            int temp = target - nums[i];
            auto it = m.find(temp);
            if( it != m.end())
                return vector<int> {i,it->second};
            else
                m.insert({nums[i],i});
        }
        throw invalid_argument("the input has no solution");
    }
};