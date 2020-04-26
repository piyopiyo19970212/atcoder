#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int time[3];
    for(int i=0; i<3; i++) cin >> time[i];
    sort(time,time+3);
    cout << time[0]+time[1] << endl;
}