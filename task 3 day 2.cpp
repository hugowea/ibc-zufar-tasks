
#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;
    int a = 1;
    int A[n][n];
    int i = 1;
    int b = 0, k = n;
    while (i != n/2 + 1)
    {
        for (int j = b; j < k - 1; j++)
        {
            A[j][i - 1] = a;
            a++;
        }
        for (int j = b; j < k - 1; j++)
        {
            A[n - i][j] = a;
            a++;
        }
        for (int j = k - 1; j> b; j--)
        {
            A[j][n - i] = a;
            a++;
        }
        for (int j = k - 1; j > b; j--)
        {
            A[i - 1][j] = a;
            a++;
        }
        b++;
        k = k - 1;
        i++;
    }
    if (n%2 == 1)
    {
        A[n/2][n/2] = n*n;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}