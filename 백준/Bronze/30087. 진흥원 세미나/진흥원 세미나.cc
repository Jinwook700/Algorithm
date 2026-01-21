#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, string> un;
    un["Algorithm"] = "204";
    un["DataAnalysis"] = "207";
    un["ArtificialIntelligence"] = "302";
    un["CyberSecurity"] = "B101";
    un["Network"] = "303";
    un["Startup"] = "501";
    un["TestStrategy"] = "105";

    int N; cin >> N;
    while(N--)
        {
            string str; cin >> str;
            cout << un[str] << "\n";
        }
}