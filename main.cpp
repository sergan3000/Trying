#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "biginteger.h"
using std::vector;
using std::cout;
using std::cin;
// right now this is the ugliest code ever. Will be fixed. Don't worry.
// don't forget to:
// change int to size_t
// add static
// change i++ to ++i
// 
#define int long long
class BigInteger;
BigInteger operator/(const BigInteger& a, const BigInteger& b);
BigInteger operator*(const BigInteger& a, const BigInteger& b);
signed main() {
    //cout << -10 % 3;
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    BigInteger a(1);
    BigInteger b(2);
    int d = 5, c = 5;
    c -= d;
    cout << d / c;
    b /= a;
    cout << a << '\n';
    return 0;
}