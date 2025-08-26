class Solution {
public:
    bool isPalindrome(int x) {
        
        int original = x;
        //unsigned in case of negative numbers.
        unsigned int reversed = 0;


        while(x > 0){
            int remainder = x % 10;
            reversed = reversed * 10 + remainder;
            x /= 10;
        }

        return original == reversed;

    }
};
