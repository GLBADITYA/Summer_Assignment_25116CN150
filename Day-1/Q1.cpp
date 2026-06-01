#include <iostream>
#include <cmath>
using namespace std;
int main ()
{ 
    int n,sum=0,i;
    cout<<"Enter a natural number\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"the sum of first n natural number is = "<<sum;
    return 0;

}

