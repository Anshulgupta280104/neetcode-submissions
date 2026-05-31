class Solution {
public:
    bool isPalindrome(string s) {
        int n= s.size();
        int start=0; int end= n-1;
        
        while(start<end)
        {
            if(s[start] != s[end])
            start++;
            end--;
            
        }

            return false;
        
    }
};
