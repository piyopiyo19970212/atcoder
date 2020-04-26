#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    char s[4];
    cin >> s;
    sort(s,s+4);
    if(s[0]==s[1] && s[1]!=s[2] && s[2]==s[3]) {
        cout << "Yes" << endl;
    }
    else { cout << "No" << endl;}
    return 0;
}