#include <iostream>
#include <cmath>
using namespace std;

int md = 0; // max depth

int bc(int n, int k, int d)
{
    md = max(md, d);

    if (k == 0 || k == n) {
        return 1;
    }
    else {
        return bc(n - 1, k - 1, d + 1) + bc(n - 1, k, d + 1);
    }
}

int main() {
    int n, k;
    cout << "n = ";cin >> n;
    cout << "k = ";cin >> k;

    cout << "Binomal coeficient C(" << n << "," << k << ") = " << bc(n, k, 0) << endl;
    cout << "Max depth of recurtion: " << md << endl;

    return 0;
}