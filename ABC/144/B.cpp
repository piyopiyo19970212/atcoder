#include<iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
  for(int i=1; i<=9; i++){
      if(n%i==0 && (n/i)/10==0) {
        cout<<"Yes"<<endl;
      return 0;
    }
    else continue;
  }
  cout<<"No"<<endl;
 return 0;
}
