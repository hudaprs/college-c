#include <stdio.h>

void main()
{
  int input_detik = 0,
      jam = 0,
      menit = 0,
      detik = 0,
      detik_dalam_jam = 60 * 60,
      detik_dalam_menit = 60,
      _input_detik = 0,
      sisa_detik = 0;

  printf("Masukkan Detik: ");
  scanf("%d", &input_detik);

  // Set detik yang diinput
  _input_detik = input_detik;

  // Kalkulasi jam
  jam = input_detik / detik_dalam_jam;

  // Kalkulasi detik untuk mendapatkan jam
  sisa_detik = input_detik - (jam * detik_dalam_jam);

  // Kalkulasi menit
  menit = sisa_detik / detik_dalam_menit;

  // Kalkulasi sisa detik dari jam untuk mendapatkan detik
  sisa_detik = sisa_detik - (menit * detik_dalam_menit);

  // Kalkulasi detik
  detik = sisa_detik;

  printf("%d Detik = %d Jam, %d Menit, %d Detik. \n", input_detik, jam, menit, detik);
  printf("%d Detik = %d:%d:%d. \n", input_detik, jam, menit, detik);
}
