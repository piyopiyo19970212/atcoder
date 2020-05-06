#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string,int> kei;
    string s;
    for(int i=0; i<n; i++) {
        cin >> s;
        kei.insert(std::make_pair(s,1));
    }
    cout << kei.size() << endl;
    return 0;
}