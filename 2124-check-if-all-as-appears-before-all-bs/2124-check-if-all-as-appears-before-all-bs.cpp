class Solution {
public:
    bool checkString(string s) {
        bool flage = true;

        for(int i = 1; i < s.length(); i++){
            if(s[i-1] == 'b' && s[i] == 'a'){
                flage = false;
            }
        }
        return flage;
    }
};