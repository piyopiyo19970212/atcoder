#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,x;
    int cnt=0,point=0;
    cin>>n>>x;
    vector<int>L(n);
    for(int i=0; i<n; i++){
        cin>>L[i];
    }
    for(int i=0; i<n+1; i++){
        if(i==0){point = 0;}
        else { point = point+L[i-1];}
        
        if(point<=x){
            cnt++;
            //cout << point <<endl;
        }
        else { break; }
    }
    cout<<cnt<<endl;
    return 0;
}
