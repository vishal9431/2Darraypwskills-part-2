// Write a program to rotate the matrix by 90 degrees anti-clockwise.
// Input 1:
// 1 2 3
// 4 5 6
// 7 8 9
// Output 1:
// 3 6 9
// 2 5 8
// 1 4 7
#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int col = 3;
    for(int i=0;i<row;i++)
    {
        for(int j=i+1;j<col;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<row;i++)
    {
        int j=0;
        int k=row-1;
        while(k>j)
        {
            swap(arr[j][i],arr[k][i]);
            j++;
            k--;
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}