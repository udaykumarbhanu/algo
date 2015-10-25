#include<stdio.h>

/* Swaps strings by swapping pointers */
void swap(char **str1_ptr, char **str2_ptr)
{
  char *temp = *str1_ptr;
  *str1_ptr = *str2_ptr;
  *str2_ptr = temp;
}

int main()
{
  char *str1 = "uday";
  char *str2 = "bhanu";
  printf("Before swap str1 is %s, str2 is %s\n", str1, str2);

  swap(&str1, &str2);
  printf("After swap str1 is %s, str2 is %s", str1, str2);

  return 0;
}

