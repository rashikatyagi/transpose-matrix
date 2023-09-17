#include <iostream>
#include <vector>
using namespace std ; 
//for displaying the matrix
void displayMatrix ( vector<vector <int> > a, int rowcol)
{
    for (int i = 0 ; i < rowcol ; i++)
    {
        for (int j = 0 ; j < rowcol ; j++)
            cout << a[i][j] << " " ;
        cout << endl;
    }
    return;
}
void swapElements ( int *ptr1, int *ptr2 )
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
void transposeOfMatrix ( vector< vector<int> > a, int rowcol)
{
    for ( int i = 0 ; i < rowcol ; i++ )
    {
        for (int j = i ; j < rowcol ; j ++ )
        {
            swapElements(&a[i][j], &a[j][i]);
        }
    }
    displayMatrix(a, rowcol);
}
int main() {
    int row_col = 0;
    cout << "Enter the number of rows and columns : ";
    cin >> row_col;
    vector < vector<int> > arr (row_col, vector<int>(row_col));
    for(int i = 0 ; i < row_col ; i++)
    {
        for(int j = 0 ; j < row_col ; j++)
        {
            cout << "Enter the element at row " << i << " and column " << j << " : ";
            cin >> arr[i][j];
        }
    }
    cout << "Present matrix is : " << endl;
    displayMatrix(arr, row_col);
    cout << "Transpose of the matrix is : " << endl;
    transposeOfMatrix(arr, row_col);
    return 0;
}
