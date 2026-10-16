class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int estimatedValue = n*(n+1)/2;
        int exactValue = 0;

        for(int i=0; i<n; i++){
            exactValue += nums[i];
        }

        return estimatedValue - exactValue;
    }
};