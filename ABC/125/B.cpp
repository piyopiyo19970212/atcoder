#include<iostream>
#include<vector>
using namespace   std;

int main()
{
    int n,i;
    cin>>n;
    vector<int>v(n),c(n);
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    for(i=0; i<n; i++){
        cin>>c[i];
    }
    int res=0;
    for(i=0; i<n; i++){
        if(v[i]-c[i]>0){ res+=v[i]-c[i];}
    }
    cout<<res<<endl;
    return 0;
}
