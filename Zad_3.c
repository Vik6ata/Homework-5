#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{ 
  
  int n,m,p;
  printf("Enter how much numbers you want to be printed:");
  scanf("%d",&n);
  double *nums=malloc(n*sizeof(double));
  if(NULL==nums)
   {
    printf("Memorry not allocated!\n");
   }
  else
  {
  for(int i=0;i<n;i++)
   {
    nums[i]=0.0+(rand()%1);
    printf("%.1lf\t",nums[i]);
   }
  }
  putchar('\n');
  printf("Enter how many new numbers you want to be printed:");
  scanf("%d",&m);
  
  nums=realloc(nums,(n+m)*sizeof(double));
  if(NULL==nums)
   {
    printf("\nMemorry not allocated!\n");
   }
  else
  {
  for(int j=0;j<n+m;j++)
   {
    nums[j]=1.0+(rand()% 2);
    printf("%.1lf\t",nums[j]);
   }
  }
  printf("\nEnter last time how much new numbers to be added:");
  scanf("%d",&p);
  nums=realloc(nums,(n+m+p)*sizeof(double));
 if(NULL==nums)
   {
    printf("\nMemorry not allocated!\n");
   }
  else
  {
  for(int k=0;k<n+m+p;k++)
   {
    nums[k]=2.0+(rand()% 3);
    printf("%.1lf\t",nums[k]);
   }
  }
  free(nums);
 

 return 0;
}