#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string name; cin >> name;
    int N; cin >> N;
    string *arr = new string[N];
    for (int i=0; i<N; i++) cin >> arr[i];
    
    sort(arr, arr + N, greater<>());
    int L_count = 0; int O_count = 0; int V_count = 0; int E_count = 0;
        
    int result = 0;
    string result_name = "";
    
    for (int i=0; i<N; i++) {
        for (char c : name) {
            if (c == 'L') L_count += 1;
            if (c == 'O') O_count += 1;
            if (c == 'V') V_count += 1;
            if (c == 'E') E_count += 1;
        }
        
        for (char c_1 : arr[i]) {
            if (c_1 == 'L') L_count += 1;
            if (c_1 == 'O') O_count += 1;
            if (c_1 == 'V') V_count += 1;
            if (c_1 == 'E') E_count += 1;
        }
        
        int mod = ((L_count + O_count)*(L_count + V_count)*(L_count + E_count)*(O_count + V_count)*(O_count + E_count)*(V_count + E_count))%100;
        if (mod >= result) {
            result = mod;
            result_name = arr[i];
        }
        L_count = 0;
        O_count = 0;
        V_count = 0;
        E_count = 0;
    }
    
    cout << result_name;
}