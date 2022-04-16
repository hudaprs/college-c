#include <stdio.h>

void main()
{
  int hari;

  printf("Masukkan angka untuk menentukan hari \n");
  printf("1=Senin, 2=Selasa, ..., 7=Minggu \n");
  printf("====================================== \n");
  printf("Masukkan Angka: ");
  scanf("%d", &hari);

  switch (hari)
  {
  case 1:
    printf("Hari Senin");
    break;
  case 2:
    printf("Hari Selasa");
    break;
  case 3:
    printf("Hari Rabu");
    break;
  case 4:
    printf("Hari Kamis");
    break;
  case 5:
    printf("Hari Jumat");
    break;
  case 6:
    printf("Hari Sabtu");
    break;
  case 7:
    printf("Hari Minggu");
    break;
  default:
    printf("Angka atau hari tidak terdaftar, coba lagi");
    return;
  }
}