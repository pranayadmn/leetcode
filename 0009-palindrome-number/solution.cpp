class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        int pop, rev = 0;
        int num = x;
        while (x != 0) {
            pop = x % 10;
            x /= 10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7))
                return false;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8))
                return false;
            rev = rev * 10 + pop;
        }
        return num == rev;
    }
};
