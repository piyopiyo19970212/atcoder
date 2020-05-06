#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int a, b, oulet=1, sum=0;
    cin >> a >> b;
    while(oulet<b){
        --oulet;
        oulet += a;
        sum++;
    }
    cout << sum << endl;
}