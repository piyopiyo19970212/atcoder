#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n, a;
    vector<int> renga;
    int cnt_num = 1;
    int sum = 0;
    int i;
    
    cin >> n;
    for(i=0; i<n; i++){
        cin >> a;
        renga.push_back(a);
    }
    for(i=0; i<n; i++){
        if(cnt_num==renga[i]){
            cnt_num++;
        }
        else { sum += 1; }
    }
    if(sum>=0 && cnt_num>1){cout << sum << endl;}
    else { cout << -1 << endl;}
    return 0;
}
