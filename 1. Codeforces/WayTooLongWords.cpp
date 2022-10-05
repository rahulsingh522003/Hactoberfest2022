// rsingh2003   

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tt;                         // number of test cases
    cin >> tt;
    while(tt--)
    {
        string s;                   // string
        cin >> s;                   // taking string as input
        int l = s.length();         // finding length of the string
        if(l > 10)
        {
            // if length of string is greater than 10, then print the first letter then (length-2) then last character
            cout << s[0] << (l-2) << s[l-1] << '\n';
        }
        else
        {
            // if length of string is less than or equal to 10, then just print the string
            cout << s << '\n';
        }
    }
    return 0;
}
