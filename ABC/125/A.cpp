#include<iostream>
using namespace std;

int main()
{
    int a,b;
    double t;
    cin >> a >> b >> t;
    int i=1,cnt=0;
    while(a*i<=t+0.5){
        cnt+=b;
        i++;
    }
    cout<<cnt<<endl;
    return 0;
}
