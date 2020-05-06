#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    string s;
    cin >> s;

    int qualifier_a=0, qualifier_b=0;
    for(int i=0; i<(int)s.length(); i++){
        if(s[i]=='a') {
            if(qualifier_a+qualifier_b<a+b) {
                cout << "Yes" << endl;
                qualifier_a++;
            }
            else {
                cout << "No" << endl;
            }
        }
        else if(s[i]=='b'){
            if(qualifier_a+qualifier_b<a+b && qualifier_b<b){
                cout << "Yes" << endl;
                qualifier_b++;
            }
            else {
                cout << "No" << endl;
            }
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}