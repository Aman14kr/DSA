class Solution {
public:
    int passwordStrength(string password) {
        map<char,int> m;
        for(int i =0;i<password.length();i++){
            m[password[i]]++;
        }
        vector<char> v;
        for(auto it : m){
            v.push_back(it.first);
        }
        int ans = 0;
        for(int i =0;i<v.size();i++){
            if(v[i] >= 'a' && v[i] <= 'z'){
                ans += 1;
            }else if(v[i] >= 'A' && v[i] <= 'Z'){
                ans += 2;
            }else if(v[i] >= '0' && v[i] <= '9'){
                ans += 3;
            }else{
                ans += 5;
            }
        }
        return ans;
    }
};