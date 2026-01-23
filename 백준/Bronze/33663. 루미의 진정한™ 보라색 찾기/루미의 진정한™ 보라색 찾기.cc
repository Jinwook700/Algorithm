#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    double h1, h2; cin >> h1 >> h2;
    double s1, s2; cin >> s1 >> s2;
    double v1, v2; cin >> v1 >> v2;
    double R, G, B; cin >> R >> G >> B;

    double M = max({R, G, B});
    double m = min({R, G, B});

    double V = M;
    double S = 255*((V - m)/V);
    double H = 0;
    
    if (V == R) H = (60 * (G - B))/(V - m);
    else if (V == G) H = 120 + (60 * (B - R))/(V - m);
    else H = 240 + (60 * (R - G))/(V - m);

    if (H < 0) H += 360;

    if ((h1 <= H && H <= h2) && (s1 <= S && S <= s2) && (v1 <= V && V <= v2))
        cout << "Lumi will like it.";
    else cout << "Lumi will not like it.";
}