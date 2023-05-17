#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    int n, m, sum = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < m; i++)
    {
        if (v[i] > 0)
            break;
        sum += v[i];
    }
    cout << abs(sum);
    return 0;
}