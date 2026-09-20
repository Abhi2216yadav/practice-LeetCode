class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length() == 0){
            return true;
        }

        string str = "";
        for(char c : s){
            if (isalnum(c)) {
                str += tolower(c);
            }
        }

        string str2 = str;
        reverse(str2.begin(), str2.end());

        return str == str2;
    }
};