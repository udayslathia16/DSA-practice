#include <iostream>
#include <iomanip>

using namespace std;

class Solution {
public:
    double mySqrt(int x) {
        int s = 0;
        int e = x;
        double ans = -1;
        double precision = 0.001;
        
        while (s <= e) {
            double mid = s + (e - s) / 2.0;
            if (mid * mid == x) {
                return mid;
            } else if (mid * mid < x) {
                ans = mid;
                s = mid + precision;
            } else {
                e = mid - precision;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    int x = 68;
    double result = sol.mySqrt(x);
    
    cout << "Square root of " << x << " is: " << fixed << setprecision(3) << result << endl;
    
    return 0;
}
