#include <stdio.h>

int main(void)
{
  int AkhirNIM,hasil,sisa,NIM,NIM2;
  char sNIM[10];
  NIM=1103204019;
  NIM2=19;

  printf("Input Nilai Anda : ");
  scanf("%d",&AkhirNIM);

  switch (AkhirNIM) {
    case 0:
      printf("Adelia");
      break;
    case 1 ... 5:
      strcpy(sNIM, "1103204019");
      printf("%s",sNIM);
      break;
    default:
      hasil = NIM/NIM2;
      sisa = NIM%NIM2;
      printf("%d\n%d",hasil,sisa);
  }

  return 0;
}
