class Solution {
public:
    long long removeZeros(long long n) {
        vector<long long> v;
        while(n != 0){
            long long dig = n % 10;
            if(dig != 0){
                v.push_back(dig);
            }
            n = n/10;
        }
        reverse(v.begin(),v.end());
        long long ans = 0;
        for(int i = 0;i<v.size();i++){
            ans = ans * 10 + v[i];
        }
        return ans;
    }
};