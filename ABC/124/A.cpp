#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    if(a-1<b) {
        cout << a+b << endl;
    }
    else { cout << a+(a-1) << endl; }
}