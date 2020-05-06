#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c,d;
    cin >> a >> b >> c >> d;
    // cout << c/b  << " " << a/d << endl;
    // cout << std::ceil(c/b)  << " " << std::ceil(a/d) << endl;
    if(std::ceil(c/b) <= std::ceil(a/d)){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}