#include<iostream>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;

int main()
{
    int N,M,C;
    cin >> N >> M >> C;
    int B[M];
    rep(i,M) cin >> B[i];

    int A, sum=0, cnt=0;
    rep(n,N){
        rep(i,M){
           cin >> A;
           sum += A*B[i];
        }
        sum += C;
        if(sum>0){
            cnt++;
        }
        sum = 0;
    }
    cout << cnt << endl;

}