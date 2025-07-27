#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int maxLen = 1;
    int currentLen = 1;

    for (int i = 1; i < s.size(); ++i)
    {
        if (s[i] == s[i - 1])
        {
            currentLen++;
            maxLen = max(maxLen, currentLen);
        }
        else
        {
            currentLen = 1;
        }
    }

    cout << maxLen << endl;
    return 0;
}
