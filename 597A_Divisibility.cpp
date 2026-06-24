#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long k, a, b;
    cin >> k >> a >> b;
 
    cout << (long long)(floor((long double)b / k) - floor((long double)(a - 1) / k));
}