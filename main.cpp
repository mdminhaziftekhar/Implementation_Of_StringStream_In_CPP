#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){

    string s, s1;
    getline(cin, s);

    int x = 0;

    s1 = s.at(0);

    stringstream c(s1);

    c >> x;

    cout << x << endl;

    return 0;
}
