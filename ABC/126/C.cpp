#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;

int cul(int k,int n)
{
    int cnt=0;
    while(n<k){
        n = n*2;
        cnt++;
    }
    return cnt;
}

int main()
{
    double n,k;
    cin>>n>>k;
    double res=0.0;
    for(int i=1;i<=n;i++){
        //cout << (1/n)*pow(0.5,cul(k,i)) << endl;
        res += (1/n)*pow(0.5,cul(k,i));
    }
    printf("%.11lf\n",res);
    return 0;
}
