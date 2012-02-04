#include<msp430.h>
int main()
{
P1DIR=0x41;
P1OUT=1;
int n=1;
while(n)
{
while((P1IN>>3)&1)
{
if(((P1IN>>3)&1)==0)
{
P1OUT=(P1OUT^0X41);
}
}
}
}
