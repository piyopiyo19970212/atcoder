#include<iostream>
#include<string>

using namespace std;

int main()
{
    string c1, c2, c;
    cin >> c1 >> c2;
    int a,b;
    cin >> a >> b;
    cin >> c;

    if(c==c1) {
        cout << a-1 << " " << b << endl;
    }
    else {
        cout << a << " " << b-1 << endl;
    }
    return 0;
}