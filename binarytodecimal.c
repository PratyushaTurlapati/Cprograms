#include<stdio.h>
int binarytodecimal(n)
{
       // Type your code here
    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}
void main()
{
  int n;
  scanf("%d",&n);
  printf("%d",binarytodecimal(n));
}
