class Solution {
public:
    bool areNumbersAscending(string s) {
        stringstream ss(s);
        string word;

        int prevVal = -1;

        while (ss >> word) {
            if (isdigit(word[0])) {
                int curVal = stoi(word);

                if (curVal <= prevVal) {
                    return false;
                }

                prevVal = curVal;
            }
        }

        return true;
    }
};