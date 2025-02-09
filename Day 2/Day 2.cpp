#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    int intVar;
    double doublevar;
    string stringVar;
    
    cin >> intVar;
    cin>>doublevar;
    
    cin.ignore();
    
    getline(cin,stringVar);
    
    cout << i+intVar << endl;
    cout << fixed << setprecision(1) << d+doublevar << endl;
    cout << s + stringVar << endl;
    
    return 0;
}
