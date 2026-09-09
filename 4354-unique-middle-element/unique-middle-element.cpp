class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        map<int,int> m;
        for(int i = 0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int n = nums.size() / 2;
        int a = nums[n];
        int cnt = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == a ){
                cnt++;
            }
        }
        if(cnt > 1) return false;
        return true;
       
    }
};