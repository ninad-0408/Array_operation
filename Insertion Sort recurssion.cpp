// Insertion sort algorithm by recurssion method.
#include <bits/stdc++.h>

using namespace std;

void fun(int *A, int j, int n)
{
    if (j < n)
    {
        int y = A[j];
        for (int i = j - 1; i >= 0; i--)
            if (A[i] < y)
            {
                A[i + 1] = y;
                break;
            }
            else if (A[i] >= y)
            {
                A[i + 1] = A[i];
                if (i == 0)
                {
                    A[i] = y;
                }
            }
        j++;
        fun(A, j, n);
    }
}

main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int A[n];
    cout << "\nEnter the elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> A[i];
    fun(A, 0, n);
    for (int i = 0; i < n; i++)
        cout << A[i];
}
