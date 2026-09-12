class Solution {
public:
    bool checkGoodInteger(int n) {
        vector<int> v;
        while(n != 0){
            int dig = n % 10;
            v.push_back(dig);
            n = n/10;
        }
        int sum = 0;
        int square = 0;
        for(int i = 0;i<v.size();i++){
            sum += v[i];
            square += v[i] *v[i];
        }
        if(square - sum >= 50){
            return true;
        }
        return false;
    }
};