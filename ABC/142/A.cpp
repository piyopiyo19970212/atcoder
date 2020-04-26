#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n==1){ cout << 1 << endl; }
    else if(n%2==0) { cout << 0.5 << endl; }
    else { cout << (n+1)/(n*2.0)<< endl;}
    return 0;
}