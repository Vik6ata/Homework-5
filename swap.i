# 0 "swap.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "swap.c"
void swap(int *a,int *b)
{
  *a=*a^*b;
  *b=*a^*b;
  *a=*a^*b;
}
