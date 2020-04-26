#include<iostream>
#include<math.h>
using namespace std;

int main(){
    long long n;
    cin>>n;

    long long  sum=1000000000000;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            if(sum > i+(n/i)-2){
                sum = i+(n/i)-2;
            }
        }
    }
    cout<<sum<<endl;
    
    return 0;
}
