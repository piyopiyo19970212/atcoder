#include<iostream>
#include <iomanip>
#include<math.h>

using namespace std;

int main()
{
    double L;
    cin >> L;
    double side = L/3;
    cout<<std::setprecision(12)<<pow(side,3)<<endl;
    return 0;
}