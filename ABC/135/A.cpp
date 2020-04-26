#include<iostream>

using namespace std;

//int abs(long int n)
//{
//    if(n<0){ return n*(-1);}
//    else return n;
//}
int main()
{
    long int A,B;
    cin>>A>>B;
    if(abs(A-B)%2==0){
        cout<<(A+B)/2<<endl;
    }
    else cout<<"IMPOSSIBLE"<<endl;
    return 0;
}
