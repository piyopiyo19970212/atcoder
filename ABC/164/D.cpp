#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    // cout << "|s|= " << s.length() << endl;
    int sum = 0;
    long long int n;
    for(int i=0; i<(int)s.length()-3; i++){
        for(int j=(int)s.length()-1; j>=i+4; j--){
            cout << i << " " << j << endl;
            n = std::stod(s.substr(i,j-i+1));
            if(n%2019==0){
                sum++;
        }
        }
    }
    cout << sum << endl;
    return 0;
}