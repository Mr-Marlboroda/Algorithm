/* programma zapisyivaet elementy iz massiva A v massiv B 
 * elementy bolshie srednego arifmetich*/
#include<iostream>
using namespace std;
int main()
{
int N, i, j, SUMM=0, SRAR=0;
    do 
      {
          cout<<"enter znachenie N "<<endl;
          cin>>N;
      }
    while(N<3 || N>100);
int A[N], B[100];
cout<<endl;
    for (i=0; i<N; i++)
     {  
         A[i]=-100 + rand()%200;
         SUMM+=A[i]; // schitaem summu elementov
     }
SRAR=SUMM/N; // schitaem srednee arifmeticheskoe
cout<<"summ "<<SUMM<<" "<<endl; 
cout<<"srar "<< SRAR<<" "<<endl;
cout<<"massiv A ["; //dlya estet
    for (i=0; i<N; i++)
     {
         cout<<A[i]<<" "; //print massiv a
     }
cout<<"] "<<endl;
cout<<"massiv B ["; //dlya estet
     for (i=0,j=0; i<N; i++)
     {
         if (A[i]>SRAR) //otbiraem nygnye elementy
             {
                 B[j]=A[i]; //zapisivaem elementy v massiv B

                 cout<<B[j]<<" ";
                 j++;
             }
     }


    cout<<"]";
    cout<<endl;
    for (i=0;i<j;i++) cout<<B[i]<<" ";
    cout<<endl;
    return 0;
}
