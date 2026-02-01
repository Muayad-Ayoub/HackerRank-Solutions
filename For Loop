#include <bits/stdc++.h>
using namespace std;

int main() {
    // Complete the code.
    string number[9] = {"one","two","three", "four","five","six","seven","eight","nine"};
    int a, b, start, end;
    cin>>a;
    cin>>b;
   start = min(a,b);
   end = max(a,b);  
    for (int n=start; n<=end;n++)
    {
        if(n>=1&&n<=9)
        cout<<number[n-1]<<endl;
        else if(n>9 && n%2==0)
        cout<<"even\n" ;
        else if(n>9 && n%2!=0)
        cout<<"odd\n" ;
    }
    return 0;
}