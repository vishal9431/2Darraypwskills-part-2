// int main(){
// int a[][2] = {{1,2},{3,4}};
// int i, j;
// for (i = 0; i < 2; i++)
// for (j = 0; j < 2; j++)
// cout << a[i][j];
// return 0;
// }
// my output is 1 2 3 4;
#include<iostream>
using namespace std;
int main(){
    int a[][2] = {{1,2},{3,4}};
    int i, j;
    for (i = 0; i < 2; i++)
    for (j = 0; j < 2; j++)
    cout << a[i][j];
    return 0;
}