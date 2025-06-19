#include <iostream>
#include <vector>
using namespace std;

void length(vector<vector<char>>& v, int a, int b, int middle, int row, int cul, int num, bool isLeft)
{
    for (int i=1; i<row - 1; i++)
        {
            if (num == 0 && i == (middle)) break;
            else if (num == 1 && i < middle) continue;
            else if (i == middle) continue;
            if (isLeft) v[b+i][a] = '|';
            else v[b+i][a+cul - 2] = '|';
        }
}

void width(vector<vector<char>>& v, int a, int middle, int row, int cul, bool one, bool two, bool three)
{
    for (int j=0; j<row; j += middle)
        {
            for (int k=1; k<cul-2; k++)
                {
                    if (!one && j == 0) continue;
                    if (!two && j == middle) continue;
                    if (!three && j == middle * 2) continue;
                    v[j][a + k] = '-';
                }
        }
}

int main() {
    int s; string n; cin >> s >> n;
    int row = 2*s + 3;
    int cul = s + 3;
    vector<vector<char>> v(row, vector<char>((cul*n.length()), ' '));
    int tempA = 0;
    int a = 0;
    int b = 0;
    int middle = (row-1)/2;
    for (int i=0; i<n.length(); i++)
        {
            a = tempA;
            if (n[i] == '1') 
                length(v, a, b, middle, row, cul, 2, false);
            else if (n[i] == '2')
            {
                length(v, a, b, middle, row, cul, 1, true);
                length(v, a, b, middle, row, cul, 0, false);
                width(v, a, middle, row, cul, true, true, true);
            }
            else if (n[i] == '3')
            {
                length(v, a, b, middle, row, cul, 2, false);
                width(v, a, middle, row, cul, true, true, true);
            }
            else if (n[i] == '4')
            {
                length(v, a, b, middle, row, cul, 0, true);
                length(v, a, b, middle, row, cul, 2, false);
                width(v, a, middle, row, cul, false, true, false);
            }
            else if (n[i] == '5')
            {
                length(v, a, b, middle, row, cul, 0, true);
                length(v, a, b, middle, row, cul, 1, false);
                width(v, a, middle, row, cul, true, true, true);
            }
            else if (n[i] == '6')
            {
                length(v, a, b, middle, row, cul, 2, true);
                length(v, a, b, middle, row, cul, 1, false);
                width(v, a, middle, row, cul, true, true, true);
            }
            else if (n[i] == '7')
            {
                length(v, a, b, middle, row, cul, 2, false);
                width(v, a, middle, row, cul, true, false, false);
            }
            else if (n[i] == '8')
            {
                length(v, a, b, middle, row, cul, 2, true);
                length(v, a, b, middle, row, cul, 2, false);
                width(v, a, middle, row, cul, true, true, true);
            }
            else if (n[i] == '9')
            {
                length(v, a, b, middle, row, cul, 0, true);
                length(v, a, b, middle, row, cul, 2, false);
                width(v, a, middle, row, cul, true, true, true);
            }
            else if (n[i] == '0')
            {
                length(v, a, b, middle, row, cul, 2, true);
                length(v, a, b, middle, row, cul, 2, false);
                width(v, a, middle, row, cul, true, false, true);
            }
            tempA += cul;
        }
    
    for (int i=0; i<row; i++)
        {
            for (int j=0; j<cul*n.length(); j++)
                {
                    cout << v[i][j];
                }
            cout << "\n";
        }
}