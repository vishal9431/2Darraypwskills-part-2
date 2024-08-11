// Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.
// Input 1: n = 3
// Output 1: [[1,2,3],[8,9,4],[7,6,5]]
// Input 2: n = 1
// Output 2: [[1]]
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    int minr =0;
    int minc =0;
    int maxr = n-1;
    int maxc = n-1;
    int number =1;
    while(maxr>=minr && maxc>=minc)
    {
        for(int j=minc;j<=maxc;j++)
        {
            arr[minr][j]=number++;
        }
        minr++;
        if(maxr<minr||maxc<minc)
        {
            break;
        }
        for(int j=minr;j<=maxr;j++)
        {
            arr[j][maxc]=number++;
        }
        maxc--;
        if(maxr<minr||maxc<minc)
        {
            break;
        }
        for(int j=maxc;j>=minc;j--)
        {
            arr[maxr][j]=number++;
        }
        maxr--;
        if(maxr<minr||maxc<minc)
        {
            break;
        }
        for(int j=maxr;j>=minr;j--)
        {
            arr[j][minc]=number++;
        }
        minc++;
    }   
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}