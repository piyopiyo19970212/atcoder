#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int N,i,cnt=0;
    cin>>N;
    vector<int> p(N);
    vector<int> q(N);
    for(i=0; i<N; i++){
        cin>>p[i];
        q[i]=p[i];
    }
    sort(p.begin(),p.end());
    for(i=0; i<N; i++){
        if(p[i]!=q[i])cnt++;
    }
    if(cnt<=2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
