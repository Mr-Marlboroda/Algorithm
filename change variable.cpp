#include<stdio.h>
int main()
{int a,b,c;
    printf("enter znachenie\n a=");
    scanf("%d",&a);
    //printf("a=%d\n",a);
    printf("enter znachenie\n b=");
    scanf("%d",&b);
   // printf("b=%d\n",b);
    printf("make to change\n");
    c=a;
    a=b;
    b=c;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
        return 0;

}
