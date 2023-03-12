#include<stdint.h>
#include<math.h>
#include<stdio.h>
int main()
{
    int bin,deci,bit_count=0;
    printf("Enter the binary value:");
    scanf("%d",&bin);
    while(bin!=0)
    {
        int8_t bit;
        bit=bin%10;
        bit_count++;
        if(bit==1)
        deci=deci+pow(2,bit_count-1);
        bin=bin/10;
    }
    printf("The Decimal value is %d",deci);

}