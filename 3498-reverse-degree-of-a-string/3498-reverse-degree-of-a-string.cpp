class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;

        for (int i = 0; i < s.length(); i++) {
            int reversed_alphabet_index = 26 - (s[i] - 'a');
            int string_index = i + 1; 
            
            sum += reversed_alphabet_index * string_index;
        }

        return sum;
    }
};