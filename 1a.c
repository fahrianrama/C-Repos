#include <stdio.h>
int main(void)
{
  int A,B;

  printf("Input nilai A: ");
  scanf("%d",&A);

  printf("\n");

  if (A > 10) {
    B=A+9;
  }
  else {
    B=A%19;
  }
  printf("%d",B);
  return 0;
}
