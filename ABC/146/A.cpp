#include<iostream>
#include<string>
using namespace std;

int main()
{
    string youbi[] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
    string S;
    cin>>S;
    if(S=="SUN"){
        cout<<7<<endl;
        return 0;
    }
    for(int i=0; i<7; i++){
        if(youbi[i]==S){
            cout<<7-(i+1)<<endl;
            break;
        }
    }
    return 0;
}
