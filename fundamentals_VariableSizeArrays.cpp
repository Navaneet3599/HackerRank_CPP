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

    //n --> Number of arrays
    //q --> Number of queries

    //To have dynamic arrays we are using vectors
    vector<vector<int> > a(n);

    for(int i = 0; i < n; i++)
    {
        //Running a loop to take inputs for n k-sized vectors
        cin >> k;
        (a[i]).resize(k);
        for(int j = 0; j < k; j++)
            cin >> a[i][j];
    }

    int queries[q][2];
    for(int i = 0; i < q; i++)
    {
        //Running a loop to take inputs for q queries which contain the 2-D indices of required element
        cin >> queries[i][0] >> queries[i][1];
    }

    for(int i = 0; i < q; i++)
    {
        //Printing the variables present at indices specified by queries.
        cout << a[queries[i][0]][queries[i][1]] << "\n";
    }
    return 0;
}