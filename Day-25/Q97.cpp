#include<iostream>
using namespace std;
int main (){
    int m,n;
    cout<<"enter size of both matrices : ";
    cin>>n>>m;
    int a[n],b[m];
    cout<<"Enter first sorted array : \n";
    for(int i=0;i<n;i++)
    cin>>a[i];
     cout<<"Enter second  sorted array : \n";
    for(int i=0;i<m;i++)
    cin>>b[i];
       int c[n + m];  
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] <= b[j]) 
            c[k++] = a[i++];
        else 
            c[k++] = b[j++];
    }

    while (i < n) c[k++] = a[i++];
    while (j < m) c[k++] = b[j++];

    cout << "Merged sorted array: ";
    for (int x = 0; x < k; x++) cout << c[x] << " ";


}