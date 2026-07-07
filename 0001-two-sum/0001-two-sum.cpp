class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> temp;  // value -> index

        for (int i = 0; i < nums.size(); i++) {
            int a=target-nums[i];

            if (temp.count(a)) {
                return {temp[a], i};
            }

            temp[nums[i]] = i;
        }
        return {};
    }
};