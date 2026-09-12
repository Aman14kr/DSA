class Solution {
public:
    bool validDigit(int n, int x) {
        vector<int> v;
        while(n != 0){
            int dig = n %10;
            v.push_back(dig);
            n = n/10;
        }
        int flag = 0;
        for(int i = 0;i<v.size();i++){
            if(v[i] == x){
                flag = 1;
                break;
            }
        }
        reverse(v.begin(),v.end());
        if(flag == 1 && v[0] != x ) return true;
        return false;
    }
};