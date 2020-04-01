#include<iostream>
using namespace std;
int main()
{ 
int n, i, j, inmin, k;
do
    {
        cout<<"enter N: "<<endl;
        cin>>n;
    }
while(n<3 || n>900);
int A[n];
for(i=0; i<n; i++) //cicl dlya sozd massiva
    { 
        A[i]=-100 + rand()%130;
        cout<<A[i]<<" ";
    }
for(i=0; i<n-1; i++) //nachinaem sort massiv;
{
    inmin=i; //inmin prisv znach i 0;
    for(j=i+1; j<n; j++)
    {
        if (A[j]<A[inmin]) inmin=j;//esle Aj menshe A s index inmin 
                                   //to   prisvaivaem imnin znachenie j; 
    }
    k=A[i]; // k vrem perem v kot viklad znach Ai;
    A[i]=A[inmin];
    A[inmin]=k;
}
cout<<endl;
for (i=0; i<n; i++)
{
    cout<<A[i]<<" ";
}
cout<<endl;
    return 0;
}
