#include <iostream>
#include <cmath>
using namespace std;

float Cal(float a, float b, float c, float d)
{
    return sqrt(pow(a-c, 2) + pow(b-d, 2));
}

int main()
{
    float a, b, c, d; cin >> a >> b >> c >> d;
    bool isAnswer = false;
    cout.precision(3);
    float e, f;
    while (cin >> e >> f)
        {
            if (Cal(a, b, e, f) <= Cal(c, d, e, f)/2)
            {
                cout << fixed << "The gopher can escape through the hole at (" 
                    << e << "," << f << ").";
                isAnswer = true;
                break;
            }                 
        }
    if (!isAnswer) cout << "The gopher cannot escape.";
}