#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    
    if(a==b){
        cout << a+b << endl;
    }
    else if(a>b){
        cout << 2*a-1 << endl;
    }
    else {
        cout << 2*b-1 << endl;
    }
}