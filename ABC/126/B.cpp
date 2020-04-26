#include<iostream>
#include<string>
using namespace std;

int main()
{
    int y,m,n;
    cin>>n;
    y = n/100;
    m = n - y*100;
//    cout << y <<"年"<<m<<"月"<<endl;
//    cout << m <<"年"<<y<<"月"<<endl;
    if(1<=y&&y<=12&&1<=m&&m<=12){
        cout<<"AMBIGUOUS"<<endl;
    }
    else if(1<=y&&y<=12){
        cout<<"MMYY"<<endl;
    }
    else if(1<=m&&m<=12){
        cout<<"YYMM"<<endl;
    }
    else {
        cout<<"NA"<<endl;
    }
    return 0;
}
