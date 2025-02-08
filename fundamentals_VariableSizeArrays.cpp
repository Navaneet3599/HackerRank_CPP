#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q, k;

    //Taking inputs for array size
    cin >> n >> q;

    vector<vector<int> > a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> k;
        (a[i]).resize(k);
        for(int j = 0; j < k; j++)
            cin >> a[i][j];
    }

    int queries[q][2];
    for(int i = 0; i < q; i++)
    {
        cin >> queries[i][0] >> queries[i][1];
    }

    for(int i = 0; i < q; i++)
    {
        cout << a[queries[i][0]][queries[i][1]] << " ";
    }
    return 0;
}