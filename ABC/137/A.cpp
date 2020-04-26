#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int max=-10000;
    if(a+b>max) max = a+b;
    if(a-b>max) max = a-b;
    if(a*b>max) max = a*b;
    cout << max << endl;
}