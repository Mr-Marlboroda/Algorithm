// one.c
//

#include<stdio.h>


int main()

{int add, a;
add=0
met: cout<<"Enter znachenie A";

cin >> a;
if (a=="exit") break;
else
{
    if (a<0) add=add-a;
    cout<<"add ="<<add;
    else
    {
        goto met;
    }
    
}




	system ("pause");
	return 0;
}
