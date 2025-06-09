#include <iostream>
using namespace std;

int main()
{
    int N; cin >> N;
    int team1 = 0;
    int team2 = 0;
    int team1_score = 0;
    int team2_score = 0;
    bool team1_win = false;
    bool team2_win = false;
    int current_time = 0;
    int temp_time = 0;
    int before_time = 0;
    for (int i=0; i<N; i++)
        {
            int team; string time; cin >> team >> time;

            int minute = stoi(time.substr(0, 2));
            int second = stoi(time.substr(3, 2));
            current_time = minute*60 + second;
            temp_time = current_time - before_time;

            if (team == 1) team1_score++;
            else if (team == 2) team2_score++;

            if (team1_win) team1 += temp_time;
            else if (team2_win) team2 += temp_time;
            
            if (team1_score == team2_score) 
            {
                team1_win = false;
                team2_win = false;
            }
            else if (team1_score > team2_score)
            {
                team1_win = true;
                team2_win = false;
                
            }
            else if (team1_score < team2_score)
            {
                team2_win = true;
                team1_win = false;
            }
            before_time = current_time;
        }
    if (team1_win) team1 += 48*60 - current_time;
    else if (team2_win) team2 += 48*60 - current_time;
    cout << 0 + team1/60/10 << 0 + team1/60%10 << ":" 
        << 0 + team1%60/10 << 0 + team1%10 << "\n";
    cout << 0 + team2/60/10 << 0 + team2/60%10 << ":" 
        << 0 + team2%60/10 << 0 + team2%10;
}