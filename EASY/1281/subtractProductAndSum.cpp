class Solution {
public:
    int subtractProductAndSum(int n) {
            int p = n % 10;
            int s = p;
            n /= 10;
            
            while (n != 0) {
                p *= n % 10;
                s += n % 10;
                n /= 10;
            }
            return p - s;        
    }
};
