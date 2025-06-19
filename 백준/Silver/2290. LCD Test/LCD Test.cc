#include <iostream>
#include <vector>
using namespace std;

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
            b = 0;
            if (n[i] == '1')
            {
                for (int i=1; i<row - 1; i++)
                    {
                        if (i == (middle)) continue;
                        v[b+i][a+cul - 2] = '|';
                    }
            }
            else if (n[i] == '2')
            {
                for (int i=1; i<row - 1; i++)
                    {
                        if (i == (middle)) break;
                        v[b+i][a+cul - 2] = '|';
                    }

                for (int i=1; i<row - 1; i++)
                    {
                        if (i <= middle) continue;
                        v[b+i][a] = '|';
                    }
                
                for (int j=0; j<row; j += middle)
                    {
                        for (int k=1; k<cul-2; k++)
                            {
                                v[j][a + k] = '-';
                            }
                    }
                
            }
            else if (n[i] == '3')
            {
                for (int i=1; i<row - 1; i++)
                    {
                        if (i == (middle)) continue;
                        v[b+i][a+cul - 2] = '|';
                    }
                
                for (int j=0; j<row; j += middle)
                    {
                        for (int k=1; k<cul-2; k++)
                            {
                                v[j][a + k] = '-';
                            }
                    }
            }
            else if (n[i] == '4')
            {
                for (int i=1; i<row - 1; i++)
                    {
                        if (i == (middle)) continue;
                        v[b+i][a+cul - 2] = '|';
                    }
                
                for (int i=1; i<row - 1; i++)
                    {
                        if (i == middle) break;
                        v[b+i][a] = '|';
                    }
                for (int k=1; k<cul-2; k++)
                    {
                                v[middle][a + k] = '-';
                    }
                
            }
            else if (n[i] == '5')
            {
                for (int i=1; i<row - 1; i++)
                    {
                        if (i == (middle)) break;
                        v[b+i][a] = '|';
                    }

                for (int i=1; i<row - 1; i++)
                    {
                        if (i <= middle) continue;
                        v[b+i][a+cul - 2] = '|';
                    }
                
                for (int j=0; j<row; j += middle)
                    {
                        for (int k=1; k<cul-2; k++)
                            {
                                v[j][a + k] = '-';
                            }
                    }
            }
            else if (n[i] == '6')
            {
                for (int i=1; i<row - 1; i++)
                    {
                        if (i == (middle)) continue;
                        v[b+i][a] = '|';
                    }

                for (int i=1; i<row - 1; i++)
                    {
                        if (i <= middle) continue;
                        v[b+i][a+cul - 2] = '|';
                    }
                
                for (int j=0; j<row; j += middle)
                    {
                        for (int k=1; k<cul-2; k++)
                            {
                                v[j][a + k] = '-';
                            }
                    }
            }
            else if (n[i] == '7')
            {
                for (int i=1; i<row - 1; i++)
                    {
                        if (i == (middle)) continue;
                        v[b+i][a+cul - 2] = '|';
                    }

                for (int k=1; k<cul-2; k++)
                    {
                                v[0][a + k] = '-';
                    }
            }
            else if (n[i] == '8')
            {
                for (int i=1; i<row - 1; i++)
                    {
                        if (i == (middle)) continue;
                        v[b+i][a] = '|';
                    }

                for (int i=1; i<row - 1; i++)
                    {
                        if (i == middle) continue;
                        v[b+i][a+cul - 2] = '|';
                    }
                
                for (int j=0; j<row; j += middle)
                    {
                        for (int k=1; k<cul-2; k++)
                            {
                                v[j][a + k] = '-';
                            }
                    }
            }
            else if (n[i] == '9')
            {
                for (int i=1; i<row - 1; i++)
                    {
                        if (i == (middle)) break;
                        v[b+i][a] = '|';
                    }

                for (int i=1; i<row - 1; i++)
                    {
                        if (i == middle) continue;
                        v[b+i][a+cul - 2] = '|';
                    }
                
                for (int j=0; j<row; j += middle)
                    {
                        for (int k=1; k<cul-2; k++)
                            {
                                v[j][a + k] = '-';
                            }
                    }
            }
            else if (n[i] == '0')
            {
                for (int i=1; i<row - 1; i++)
                    {
                        if (i == (middle)) continue;
                        v[b+i][a] = '|';
                    }

                for (int i=1; i<row - 1; i++)
                    {
                        if (i == middle) continue;
                        v[b+i][a+cul - 2] = '|';
                    }
                
                for (int j=0; j<row; j += middle * 2)
                    {
                        for (int k=1; k<cul-2; k++)
                            {
                                v[j][a + k] = '-';
                            }
                    }
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