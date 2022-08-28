#include<stdio.h>
#include<stdint.h>
#define MAX(x,y,z) (x)>(y)?((x>z)?x:z):((y>z)?y:z)
#define MIN(x,y,z) (x)<(y)?((x<z)?x:z):((y<z)?y:z)
#define SETBIT(mask,bit) (mask|=(1ull<<bit))
#define CLEARBIT(mask,bit) (mask&=~(1ull<<bit))
#define INVERSERBIT(mask,bit) (mask^=(1ull<<bit))
#define CHECKBIT(mask,bit) !!(mask&(1ull<<bit))
#define SWAP(a,b) a=a^b;b=a^b;a=a^b;



int main()
{
 uint64_t mask;
 int x,y,z,bit;
 printf("Enter the first number:");
 scanf("%d",&x);
 printf("\nEnter the second number:");
 scanf("%d",&y);
 printf("\nEnter the last number:");
 scanf("%d",&z); 
 printf("\n");
 printf("The largest number is:%d\n",MAX(x,y,z));
 printf("The smallest number is:%d\n",MIN(x,y,z));
 putchar('\n');
 SETBIT(mask,17);
 SETBIT(mask,20);
 SETBIT(mask,63);
 SETBIT(mask,48);
 CLEARBIT(mask,63);
 INVERSERBIT(mask,15);
 INVERSERBIT(mask,13);
 for(int bit=63;bit>=0;bit--)
 {
    printf("%d",CHECKBIT(mask,bit));
 }
 putchar('\n');
 int a,b;
 printf("Enter the first number:");
 scanf("%d",&a);
 printf("Enter the second number:");
 scanf("%d",&b);
 SWAP(a,b);
 printf("\nSwapped numbers:a=%d b=%d",a,b);
 

 
 return 0;
}