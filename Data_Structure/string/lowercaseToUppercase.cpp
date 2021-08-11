// Write a program to change uppercase string into lower case

#include <bits/stdc++.h>
using namespace std;

string lowerCase(string str)
{

    for (int i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]);
    }

    return str;
}
int main()
{
    string str = "FARHEENKHAN";

    string ans = lowerCase(str);

    cout << ans << " ";

    return 0;
}