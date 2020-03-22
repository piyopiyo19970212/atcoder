#include<iostream>
#include<string>

using namespace std;

string string_reverse(string s)
{   
    char temp;
    int len = s.length();
    for (int i=0; i <len/2; i++) {
        temp = s[i];
        s[i] = s[len-i-1];
        s[len-i-1] = temp;
    }
    return s;
}

int kaibun(string s)
{
    string r = string_reverse(s);
    if(s == r){ return 0; }
    else { return 1; }
}

string extract(string s, int start, int end){
    string r;
    for(int i=start; i<=end; i++){
        r += s[i];
    }
    return r;
}

int main()
{
    string s;
    cin >> s;
    if(kaibun(s)== 0){
        string mae = extract(s, 0, (s.length()-1)/2-1);
        string ushiro = extract(s, (s.length()+3)/2-1, s.length()-1);
        if(kaibun(mae)==0 && kaibun(ushiro)==0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
        
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}
