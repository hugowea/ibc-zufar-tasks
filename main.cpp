#include <iostream>
#include <vector>
using namespace std;

int main() {
    int A[2][2];
    cout << "Write 1st 2*2 matrix's elements: ";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << endl << "Write 2nd 2*2 matrix's elements: ";
    int B[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> B[i][j];
        }
    }
    cout << endl << "Elements of 1st matrix: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Elements of 2nd matrix: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
   int sum[2][2], diff[2][2];
   for (int i = 0; i < 2; i++)
   {
       for (int j = 0; j < 2; j++)
       {
           sum[i][j] = A[i][j] + B[i][j];
           diff[i][j] = A[i][j] - B[i][j];
       }
   }
   cout << "Sum of two matrices: " << endl;
   for (int i = 0; i < 2; i++)
   {
       for (int j = 0; j < 2; j++)
       {
           cout << sum[i][j] << " ";
       }
       cout << endl;
   }
   cout << "Subtraction of two matrices: " << endl;
   for (int i = 0; i < 2; i++)
   {
       for (int j = 0; j < 2; j++)
       {
           cout << diff[i][j] << " ";
       }
       cout << endl;
   }
   cout << "Write elements of 3*3 matrix" << endl;
   int C[3][3];
   for (int i = 0; i < 3; i++)
   {
       for (int j = 0; j < 3; j++)
       {
           cin >> C[i][j];
       }
   }
   int Determination = C[0][0]*C[1][1]*C[2][2] + C[0][1]*C[1][2]*C[2][0] + C[0][2]*C[1][0]*C[2][1];
   Determination -= C[0][2]*C[1][1]*C[2][0];
   Determination -= C[0][1]*C[1][0]*C[2][2];
   Determination -= C[0][0]*C[1][2]*C[2][1];
   cout << "The determination of matrix is: " << Determination;
}
