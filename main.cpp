#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        int position = 0;
        for (auto it=p.begin(); it != p.end();++it) {
            auto ch = *it;
            switch (ch) {
                case '.': {}
                break;
                case '*': 
                {
                    return true;
                    // if (s.length() == (position + 1))
                    //     //if ( && ch is p.last_element)
                    //     return true;
                    // else
                        
                }
                break;
                default:
                    {
                        if (s[position++] == ch)
                            continue;
                        else
                            return false;
                    }
            }
        }
            
    }
};

int main()
{
  std::cout << "Start benchmark!" << '\n';
  Solution s;
  std::cout << s.isMatch("aaa", "a") << std::endl;
  std::cout << s.isMatch("abbbc", "a.***") << std::endl;

}
