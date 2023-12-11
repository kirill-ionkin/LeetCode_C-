// 929. Unique Email Addresses
// https://leetcode.com/problems/unique-email-addresses/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>

#include <limits.h>


using namespace std;


class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> unique_emails;
        for (auto& email: emails)
        {
            string local_name_str = "";
            string domain_name_str = "";
            bool local_name = true;
            bool plus = false;
            for (int i = 0; i < email.size(); ++i)
            {
                if (email[i] == '@')
                    local_name = false;

                if (email[i] == '+')
                    plus = true;    

                if (local_name && !plus)
                {
                    if (email[i] != '.')
                        local_name_str += email[i];
                }
                else if (!local_name)
                {
                    domain_name_str += email[i];
                }
            }

            unique_emails.insert(local_name_str + domain_name_str);
        }

        return unique_emails.size();
    }
};