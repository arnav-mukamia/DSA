class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int need;

        for(int i=0;i<nums.size();i++){  // loop to travers through array
            need= target - nums[i]; // 9-2 = 7
            if(mp.find(need)!=mp.end()){
                return {mp[need],i};
            }
            mp[nums[i]]=i;
            
        }
        return {};
        
    }
};