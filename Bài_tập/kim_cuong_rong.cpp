//      *         i = 1    j = n
//     * *        i = 2    j = n - 1  || n + 1
//    *   *       i = 3    j = n - 2  || n + 2
//   *     *      i = 4    j = n - 3
//  *       *     i = 5    j = n - 4  || n + 4
//   *     *      i = 2n - 4    j = n - 3  || n + 3
//    *   *       i = 2n - 3    j = n - 2  || n + 2
//     * *        i = 2n - 2    j = n - 1  || n + 1
//      *         i = 9    j = n

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < 2*n; ++i)
    {
        for (int j = 1; j < 2*n; ++j)
        {
            if (i == n || i == n - 1 || j == n - i + 1 || j == n + i - 1 || j == 1 || j == 2 * n - 1)
            {
                cout << " *";
            }
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
