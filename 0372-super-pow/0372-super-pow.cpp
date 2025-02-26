class Solution {
public:
    const int MOD = 1337;
    int modPow(int base, int exp) {
        int result = 1;
        base %= MOD; 
        
        while (exp > 0) {
            if (exp % 2 == 1) {  
                result = (result * base) % MOD;
            }
            base = (base * base) % MOD;  
            exp /= 2;  
        }
        
        return result;
    }

    int superPow(int a, vector<int>& b) {
        int result = 1;
        
        for (int digit : b) {
            result = (modPow(result, 10) * modPow(a, digit)) % MOD;
        }
        
        return result;
    }
};
