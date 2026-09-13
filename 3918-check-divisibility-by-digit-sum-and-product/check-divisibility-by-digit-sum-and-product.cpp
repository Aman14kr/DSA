class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int prod = 1;
        int a = n;
        if(n < 10){
            return false;
        }
        while(n != 0){
            int dig = n%10;
            sum += dig;
            prod *= dig;
            n = n/10;
        }
        int plus = sum + prod;
        if(plus % a == 0 || a % plus == 0){
            return true;
        }
        return false;
    }
};