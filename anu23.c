#include <stdio.h>
 
void main()
{
  int a[100], min, size, c;
 
  printf("Enter the number of elements in array\n");
  scanf("%d", &size);
 
  printf("Enter %d integers\n", size);
 
  for (c = 0; c < size; c++)
    scanf("%d", &a[c]);
 
  min = a[0];
 
  for (c = 1; c < size; c++)
  {
    if (a[c] < min)
    {
       min= a[c];
    }
  }
 
  printf("Minimum element is %d.\n", min);
}