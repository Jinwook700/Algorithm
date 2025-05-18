#include <iostream>
using namespace std;

int main() {
    int T; cin >> T;
    cin.ignore();
    
    for (int i=0; i<T; i++)
        {
            string str; getline(cin, str);
            int arr[26] = {0};
            for (char c : str) if (c != ' ') arr[c - 'a']++;
            
            int max = 0;
            int maxIndex = 0;
            
            for (int j=0; j<26; j++)
                {
                    if (arr[j] > max) 
                    {
                        max = arr[j];
                        maxIndex = j;
                    }
                }

            int maxNum = 0;
            for (int k=0; k<26; k++) if (arr[k] == max) maxNum++;
            if (maxNum == 1) cout << char(maxIndex + 'a') << "\n";
            else cout << "?" << "\n";
        }
}