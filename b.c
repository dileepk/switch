#include<msp430.h>
int main()
{
int n=1;
P1DIR=1;
while(n)
{
while(((P1IN>>3)&1))
{
P1OUT=1;
}
P1OUT=0;
}
}
