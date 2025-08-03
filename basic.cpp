#include<bits/stdc++.h>
using namespace std;
int main(){
    Solution;
    return 0;
}


class Solution {
public: 
    int power(int base, int exponent) {
        int result = 1;
        for(int i = 0; i < exponent; ++i) {
            result *= base;
        }
        return result;
    }

    bool isArmstrong(int n) {
        int original = n;
        int digits = 0;
        int temp = n;

        // Count number of digits
        while (temp != 0) {
            digits++;
            temp = temp / 10;
        }

        int arm = 0;
        temp = n;

        // Calculate Armstrong sum
        while (temp != 0) {
            int ld = temp % 10;
            arm += power(ld, digits);
            temp = temp / 10;
        }

        return arm == original;
    }
};
