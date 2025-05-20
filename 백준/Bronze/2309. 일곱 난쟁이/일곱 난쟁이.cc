#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[9] = {0};
    int sum = 0;
    for (int i=0; i<9; i++) 
    {
        int height; cin >> height;
        arr[i] = height;
        sum += height;
    }

    int first = 0; int second = 0; bool flag = false;
    for (int j=0; j<9; j++)
        {
            for (int k=0; k<9; k++)
                {
                    if (j != k && sum - arr[j] - arr[k] == 100)
                    {
                        first =arr[j];
                        second = arr[k];
                        flag == true;
                    }
                    if (flag) break;
                }
            if (flag) break;
        }

    sort(arr, arr+9);
    for (int l=0; l<9; l++)
        {
            if (arr[l] != first && arr[l] != second) cout << arr[l] << "\n";
        }
}