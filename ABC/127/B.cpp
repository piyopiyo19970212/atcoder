#include<iostream>
using namespace std;

int main()
{
    int r,d,last;
    cin>>r>>d>>last;
    for(int i=0; i<10; i++){
        last = last*r-d;
        cout << last<<endl;
    }
    return 0;
}
