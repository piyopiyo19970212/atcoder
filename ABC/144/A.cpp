#include<iostream>
using namespace std;

int main()
{
 	int a,b;
  cin>>a>>b;
  if(a/10==0 && b/10==0){
  	cout<<a*b<<endl;
  }
  else { cout<<-1<<endl; }
  return 0;
}
