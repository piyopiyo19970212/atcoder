#include<iostream>

using namespace std;

int main()
{
    long long int a, b;
    cin>>a>>b;
    
    long long int x = a*b;
    if(a<b){
       int tmp = a;
       a = b;
       b = tmp;
     }
     long long int r = a % b;
     while(r!=0){
       a = b;
       b = r;
       r = a % b;
     }
    cout << x/b << endl;
	return 0;
}
