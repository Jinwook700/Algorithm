#include <string>
#include <vector>
#include <numeric>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int numerator = numer1 * denom2 + numer2 * denom1;
    int denominator = denom1 * denom2;
    int least = gcd(numerator, denominator);
    answer.push_back(numerator / least);
    answer.push_back(denominator / least);
    return answer;
}