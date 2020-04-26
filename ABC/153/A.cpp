#include<iostream>

using namespace std;


int main()
{
    int h,a;
    cin >> h >> a;
    int cnt = 0;
    while(h-a>0){
        h = h-a;
        cnt++;
    }
    cout << cnt+1 << endl;
    return 0;
}
