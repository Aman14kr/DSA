class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> v;
        while(n!=0){
            int dig = n % 10;
            v.push_back(dig);
            n = n/10;
        }
        reverse(v.begin(),v.end());
        int a = v.size();
        vector<int> ans;
        for(int i = 0;i<v.size();i++){
             ans.push_back(v[i]*pow(10,--a));
        }
        vector<int> b;
        for(int i =0;i<ans.size();i++){
            if(ans[i] != 0){
                b.push_back(ans[i]);
            }
        }
        return b;
    }
};