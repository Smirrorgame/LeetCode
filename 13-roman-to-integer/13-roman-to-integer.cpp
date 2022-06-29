#include <map>
#include <string>
using namespace std;


class Solution {
private:
    map<char, int> myMap = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

public:
    int romanToInt(const string s)
    {
        // cout << endl;
        int sum = 0;
        for (int i = 0; i < s.length(); i++)
        {
            const char c = s[i];
            sum += myMap[c];
            if (c == 'I' && i < s.length() + 1)
            {
                if (s[i + 1] == 'V' || s[i + 1] == 'X')
                {
                    sum += myMap[s[i + 1]];
                    sum -= 2 * myMap[c];
                    i++;
                }
            }
            else if (c == 'X' && i < s.length() + 1)
            {
                if (s[i + 1] == 'L' || s[i + 1] == 'C')
                {
                    sum += myMap[s[i + 1]];
                    sum -= 2 * myMap[c];
                    i++;
                }
            }
            else if (c == 'C' && i < s.length() + 1)
            {
                if (s[i + 1] == 'D' || s[i + 1] == 'M')
                {
                    sum += myMap[s[i + 1]];
                    sum -= 2 * myMap[c];
                    i++;
                }
            }
        }

        return sum;
    }
};