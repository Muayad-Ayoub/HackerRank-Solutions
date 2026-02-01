#include <bits/stdc++.h>
using namespace std;
int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q, k, row, column;
    cin>>n>>q;
    int **arr = new int*[n];
    for(int i = 0; i<n;i++)
    {
        cin>>k;
        arr[i] = new int[k];
        for(int j=0;j<k;j++)
        cin>>arr[i][j];        
    }
    for(int i=0;i<q;i++)
    {
        cin>>row>>column;
        cout<<arr[row][column]<<endl;
    }
    for(int i=0;i<n;i++)
    {
        delete [] arr[i];
    }
    delete [] arr;
return 0;
}