#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s,t;
    cin >> s >> t;
    int sum = 0;
    for(int i=0; i<s.length(); i++) {
        if(s[i]==t[i]) sum++;
    }
    cout << sum << endl;
}