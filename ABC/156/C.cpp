#include<iostream>
#include<algorithm>

#define rep(i,n) for(int i=0; i<(int)n; i++)

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n];
    rep(i,n) cin >> x[i];

    int result = 1000000000;

    rep(i,100){
        int cost = 0;
        rep(j,n) cost += (x[j]-i) * (x[j]-i);
        result = min(result, cost);
    }

    cout << result << endl;
}