#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N; cin >> N;
    vector<int> line(N-1);
    vector<int> price(N);
    vector<bool> check(N);
    for (int i=0; i<N-1; i++) cin >> line[i];
    for (int i=0; i<N; i++) cin >> price[i];
    vector<int> priceList(price.begin(), price.end());
    sort(priceList.begin(), priceList.end());
    int leastPrice = priceList[0];

    int beforePos = 0;
    int beforePrice = price[0];
    int nextPrice = 0;
    for (int i=0; i<N; i++)
        {
            nextPrice = price[i];
            if (nextPrice < beforePrice && i != N-1)
            {
                check[beforePos] = true;
                beforePos = i;
            }
        }

    int sum = 0;
    for (int i=0; i<N-1; i++)
        {
            if (price[i] == leastPrice)
            {
                for (int j = i; j<N-1; j++)
                    {
                        sum += leastPrice*line[j];
                        //cout << "min sum : " << sum << "\n";
                    }
                break;
            }
            if (check[i]) beforePrice = price[i];
            sum += beforePrice * line[i];
            //cout << "sum : " << sum << "\n";
        }
    cout << sum;
}