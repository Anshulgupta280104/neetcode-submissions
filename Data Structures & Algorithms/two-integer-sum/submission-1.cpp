class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<pair<int,int>> arr;

        for(int i = 0; i < nums.size(); i++) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end());

        int left = 0;
        int right = arr.size() - 1;

        while(left < right) {
            int sum = arr[left].first + arr[right].first;

            if(sum == target) {
                int firstIdx = arr[left].second;
                int secondIdx = arr[right].second;
                return {min(firstIdx, secondIdx), max(firstIdx, secondIdx)};
            }
            else if(sum < target) {
                left++;
            }
            else {
                right--;
            }
        }

        return {};
    }
};