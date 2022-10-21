class Solution {
public:
    int reverse(int x) {
        double n = 0;
        while(x != 0){
            if(n*10 > pow(2,31) - 1 || n*10 < -1*pow(2,31))
                return 0;
            
            n = n*10 + x%10;
            x = x/10;
        }
        return n;
    }
};
