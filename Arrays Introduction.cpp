#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin>>N;
    int *ptr = new int[N];
    for(int i=0; i<N;i++)
    cin>>ptr[i];
    for(int i=N-1; i>=0;i--)
    cout<<ptr[i]<<" ";
    delete [] ptr;
    ptr = nullptr;
    return 0;
}