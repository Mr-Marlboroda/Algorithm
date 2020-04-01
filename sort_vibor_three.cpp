#include<iostream>
using namespace std;
int main ()
{
int i, j, n, k, in_max;
    do
    {
        cout<<"enter N: "<<endl;
        cin>>n;
    }
    while (n<3 || n>1000); 
int A[n];
    for (i=0; i<n; i++)
    {
        A[i]=-100 + rand()%200;
        cout<<A[i]<<" ";
    }
    cout<<endl;
    //
    //
    for (i=0; i<n-1; i++)
    {
        in_max=i;
        for (j=i+1; j<n; j++)
        {
            if(A[j]>A[in_max]) in_max=j;
        }
        k=A[i];
        A[i]=A[in_max];
        A[in_max]=k;
    }
    //
    //
    for (i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
 


cout<<endl;
return 0;
}
