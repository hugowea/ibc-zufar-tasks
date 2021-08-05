#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> A;
    cout << "Write 1st vector's elements: ";
    for (int i = 0; i < 3; i++)
    {
        int a;
        cin >> a;
        A.push_back(a);
    }
    cout << endl << "Write 2nd vector's elements: ";
    vector <int> B;
    for (int i = 0; i < 3; i++)
    {
        int b;
        cin >> b;
        B.push_back(b);
    }
    cout << endl << "Elements of 1st vector: ";
    for (int i = 0; i < 3; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "Elements of 2nd vector: ";
    for (int i = 0; i < 3; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;
    vector <int> sum, diff, cross;
    int scalar = 0;
    for (int i = 0; i < 3; i++)
    {
        sum.push_back(A[i] + B[i]);
        diff.push_back(A[i] - B[i]);
        scalar += A[i]*B[i];
    }
    cross.push_back(A[1]*B[2] - B[1]*A[2]);
    cross.push_back(A[2]*B[0] - A[0]*B[2]);
    cross.push_back(A[0]*B[1] - A[1]*B[0]);
    cout << "Summation of vectors: ";
    for (int i = 0; i < 3; i++)
    {
        cout << sum[i] << " ";
    }
    cout << endl << "Subtraction of vectors: ";
    for (int i = 0; i < 3; i++)
    {
        cout << diff[i] << " ";
    }
    cout << endl << "scalar product of vectors: " << scalar << endl << "Cross product of vectors: ";
    for (int i = 0; i < 3; i++)
    {
        cout << cross[i] << " ";
    }
}
