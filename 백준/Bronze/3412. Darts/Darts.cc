#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T; cin >> T;
    while(T--)
        {
            int num; cin >> num;
            int score = 0;
            for (int i=0; i<num; i++)
                {
                    double x, y; cin >> x >> y;
                    double arrow = sqrt(x*x + y*y)/20;
                    if (arrow > 10) continue;
                    if (arrow > 0 && arrow <= 20 && arrow - floor(arrow) == 0) score++;
                    
                    score += 10 - floor(arrow);
                }
            cout << score << "\n";
        }
}