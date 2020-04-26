#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string S;
    cin>>S;
    
    char str[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i=0; i<S.length(); i++){
        S[i] = (S[i] - 'A' + n) % 26 + 'A';
    }
    cout<<S<<endl;
    return 0;
}
