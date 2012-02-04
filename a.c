#include<msp430.h>
int main()
{
int i=1;
while(i)
if(((P1IN>>3)&1)==0)
P1DIR=1;
P1OUT=1;
}
