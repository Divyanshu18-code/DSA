class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;   
        bool negative = N < 0;    // Check negative power
        if(N < 0) {
            N = -N;   // Convert to positive
        }
        double ans = 1.0;
        while(N > 0) {
            if(N % 2 == 1) {
                ans = ans * x;  // Multiply if odd
            }
            x = x * x;  // Square the base
            N = N/2;    // Halve the exponent
        }
        if(negative) {
            return 1.0 / ans;
        }
        return ans;
    }
};