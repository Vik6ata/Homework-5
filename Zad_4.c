#include<stdio.h>
void Sqrt(double i,double n);
int main()
{
  int i;
  double n;
  Sqrt( i, n);
}
void Sqrt(double i,double n)
{ char answer;
  
  do
  {
  printf("Enter your number:");
  scanf("%lf",&n);
  for(i=0.01;i*i<n;i+=0.01);
  printf("Square:%.2lf\n",i);
  printf("Another time Y/N");
  scanf("%c",&answer);

  }while(answer=='Y'||answer=='y');
}