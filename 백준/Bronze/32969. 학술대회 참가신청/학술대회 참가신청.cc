#include <iostream>
using namespace std;

int main() {
    string str; getline(cin, str);
    if (str.find("history") != string::npos) cout << "digital humanities";
    else if (str.find("social") != string::npos) cout << "digital humanities";
    else if (str.find("language") != string::npos) cout << "digital humanities";
    else if (str.find("literacy") != string::npos) cout << "digital humanities";
    else if (str.find("bigdata") != string::npos) cout << "public bigdata";
    else if (str.find("public") != string::npos) cout << "public bigdata";
    else if (str.find("society") != string::npos) cout << "public bigdata";
}