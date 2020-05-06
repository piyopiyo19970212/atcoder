#include<iostream>
#include <math.h> 

using namespace std;

int main()
{
    double N;
    cin >> N;
    double result = ceil(N/1.08);

    if(floor(result*1.08)==N){
        cout << ceil(result) << endl;
    }
    else { cout << ":(" << endl;}
    return 0;
}