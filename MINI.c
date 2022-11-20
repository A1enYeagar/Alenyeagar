#include<reg51.h>
sbit led=P2^0;
void delay()
{
unsigned int i,j;
for(i=0;i<1000;i++)
for(j=0;j<5;j++);
}
void main(void)
{
while(1){
led=0;
delay();
led=1;
delay();
}
}