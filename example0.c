#include "stdio.h"
#include "stdlib.h"

char big_array[1<<24];  /* 16 MB */
char huge_array[1<<28]; /* 256 MB */

int beyond;
char *p1, *p2, *p3, *p4;

int useless() { return 0; }

int main()
{
  p1 = malloc(1<<28); /* 256 MB */
  p2 = malloc(1<< 8); /* 256 B */
  p3 = malloc(1<<28); /* 256 MB */
  p4 = malloc(1<< 8); /* 256 B */

  printf("P1 = %p \n", p1);
  printf("P2 = %p \n", p2);
  printf("P3 = %p \n", p3);
  printf("P4 = %p \n", p4);
  /* Add print statements ... */
}
