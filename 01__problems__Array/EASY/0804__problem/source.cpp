// 804. Unique Morse Code Words
// https://leetcode.com/problems/unique-morse-code-words/description/


#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>


using namespace std;


class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        std::vector<string> morse_codes = 
        {
            ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", 
            "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-",
            ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."
        };


        unordered_set<string> unique_codes;
        for (string word: words)
        {   
            string code = "";
            for (int i = 0; i < word.size(); ++i)
            {
                code += morse_codes[word[i] - 'a'];
            }
            unique_codes.insert(code);
        }
        return unique_codes.size();
    }
};
