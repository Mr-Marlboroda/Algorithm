// programma nahodit pervuy po poryadku posledovatelnost iz treh noley
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter N"<<endl;
cin>>n;
int A[n], i, jmax=0;
for(i=0; i<n; i++)
   {
       A[i]=-1 + rand()%2;
   }
for(i=0; i<n; i++)
    { 
        if(A[i]==0) 
            {
                jmax=jmax+1;
            }
        else
            {
                jmax=0;
            }
        cout<<A[i]<<" ";

        if (jmax>=3) 
            {
                break;
            }

    }
cout<<endl;
cout<<jmax;
cout<<endl;
    return 0;
}
