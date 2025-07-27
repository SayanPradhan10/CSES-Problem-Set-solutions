#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long sum = accumulate(v.begin(), v.end(), 0LL);
    long long sum1 = 1LL * n * (n + 1) / 2;
    cout << (sum1 - sum) << endl;
}
