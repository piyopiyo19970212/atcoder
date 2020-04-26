#include<iostream>
#include<string>

using namespace std;

int main()
{
    string tenki;
    cin >> tenki;
    if(tenki=="Sunny") { cout << "Cloudy" << endl; }
    else if(tenki=="Cloudy") { cout << "Rainy" << endl; }
    else { cout << "Sunny" << endl; } 
}