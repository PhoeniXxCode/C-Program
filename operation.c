#include <stdio.h>
int main()
{
    int a, b;
    float c = 2.3;
    printf("enter number a:\n");
    scanf("%d", &a);
    printf("enter number b:\n");
    scanf("%d", &b);
    printf("the sum is %d\n", a+b);
    //arithmetic operations
    printf("a+b=%d\n",a+b);
    printf("a-b=%d\n",a-b);
    printf("a*b=%d\n",a*b);
    printf("a/b=%d\n",a/b);
    printf("a+c=%f\n",a+c);
    //relational operations
    printf("a==b=%d\n",a==b);
    printf("a>=b=%d\n", a>=b);
    printf("a<=b=%d\n", a<=b);
    printf("a!=b=%d\n",a!=b);
    printf("a>b=%d\n",a>b);
    printf("a<b=%d\n",a<b);
    //assignment operations
    printf("a=b=%d\n",a=b);
    printf("a+=b=%d\n",a+=b);
    printf("a-=b=%d\n",a-=b);
    printf("a*=b=%d\n",a*=b);
    printf("a/=b=%d\n",a/=b);
    //logical operations
     printf("a&&b=%d\n",a&&b);
     printf("a||b=%d\n",a||b);
    return 0;
}
