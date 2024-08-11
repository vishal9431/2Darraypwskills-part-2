// Write a program to print the elements of both the diagonals in a square matrix.
// Input 1:
// 1 2 3
// 4 5 6
// 7 8 9
// Output 1:
// 1 3
// 5
// 7 9
#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row =sizeof(arr)/sizeof(arr[0]);
    int coloum = sizeof(arr[0])/sizeof(arr[0][0]);
    for(int i=0;i<row;i++ )
    {
        cout<<arr[i][i]<<" ";
    }
    cout<<endl;
    int i=0;
    for(int j=row-1;j>=0;j--)
    {
        cout<<arr[i][j]<<" ";
        i++;
    }

}