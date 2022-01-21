//Write a program for matrix multiplication
#include <iostream>
using namespace std;

int main()
{
    int choice = 0;

    do
    {
        int first[10][10], second[10][10], result[10][10];
        int row_1, col_1, row_2, col_2, i, j, k;

        cout << "Enter rows for first matrix: ";
        cin >> row_1;

        cout << "Enter  columns for first matrix: ";
        cin >> col_1;

        cout << "Enter rows for second matrix: ";
        cin >> row_2;

        cout << "Enter  columns for second matrix: ";
        cin >> col_2;

        while (col_1 != row_2)
        {
            cout << " column of first matrix not equal to row of second.(matrix multiplication not possible)" << endl;

            cout << "Enter rows for first matrix: ";
            cin >> row_1;

            cout << "Enter  columns for first matrix: ";
            cin >> col_1;

            cout << "Enter rows for second matrix: ";
            cin >> row_2;

            cout << "Enter  columns for second matrix: ";
            cin >> col_2;
        }

        // Storing elements of first matrix.
        cout << endl
             << "Enter elements of matrix 1:" << endl;
        for (i = 0; i < row_1; ++i)
        {
            for (j = 0; j < col_1; ++j)
            {
                cout << "Enter element first[" << i + 1 << "][" << j + 1 << "] : ";
                cin >> first[i][j];
            }
        }

        // Storing elements of second matrix.
        cout << endl
             << "Enter elements of matrix 2:" << endl;
        for (i = 0; i < row_2; ++i)
        {
            for (j = 0; j < col_2; ++j)
            {
                cout << "Enter element second[" << i + 1 << "][" << j + 1 << "] : ";
                cin >> second[i][j];
            }
        }

        for (i = 0; i < row_1; ++i)
        {
            for (j = 0; j < col_2; ++j)
            {
                result[i][j] = 0;
            }
        }

        // Multiplying matrix
        for (i = 0; i < row_1; ++i)
        {
            for (j = 0; j < col_2; ++j)
                for (k = 0; k < col_1; ++k)
                {
                    result[i][j] += first[i][k] * second[k][j];
                }
        }

        // Displaying the multiplication of two matrix.
        cout << endl
             << "Result Matrix: " << endl;
        for (i = 0; i < row_1; ++i)
        {
            for (j = 0; j < col_2; ++j)
            {
                cout << " " << result[i][j];
                if (j == col_2 - 1)
                    cout << endl;
            }
        }

        cout << "Do you want to continue?(1/0)" << endl;
        cin >> choice;
    } while (choice == 1);
    return 0;
}