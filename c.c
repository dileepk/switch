#include<msp430.h>
int main()
{
int n=1;
P1DIR=0X41;
P1OUT=1;
while(n)
{
if(P1OUT==1)
{
while(((P1IN>>3)&1)==0)
{
P1OUT=0X40;
}
}
else
{
while(((P1IN>>3)&1)==0)
{
P1OUT=1;
}
}
}
}
