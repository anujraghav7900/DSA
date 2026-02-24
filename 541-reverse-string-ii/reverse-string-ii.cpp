#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseStr(string s, int k) {
        
        for (int i = 0; i < s.length(); i += 2 * k) {
            
            // Reverse first k characters in every 2k block
            reverse(s.begin() + i, 
                    s.begin() + min(i + k, (int)s.length()));
        }
        
        return s;
    }
};