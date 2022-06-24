#include <stdio.h>
#include <string.h>

void main()
{
  char input_langganan[1000], langganan[] = "Langganan";
  int input_lembar_photocopy = 0, harga_perlembar = 0, apakah_berlangganan = -1;
  double total_harga = 0;

  // Input Status
  printf("Masukkan Status: ");
  scanf("%[^\n]s", input_langganan);

  // Input Lembar Photocopy
  printf("Masukkan Lembar Photocopy: ");
  scanf("%d", &input_lembar_photocopy);

  // Check apakah pelanggan berlangganan
  apakah_berlangganan = strcmp(langganan, input_langganan);

  printf("=============FAKTUR=============\n");

  // Print untuk mengetahui apakah pelanggan berlangganan
  if (apakah_berlangganan == 0)
  {
    printf("=============ANDA BERLANGGANAN=============\n");
  }
  else
  {
    printf("=============ANDA TIDAK BERLANGGANAN=============\n");
  }

  // Print status dan lembar photocopy
  printf("Status: %s\n", apakah_berlangganan == 0 ? "Langganan" : "Tidak Berlangganan");
  printf("Lembar Photocopy: %d\n", input_lembar_photocopy);

  // Check apakah pelanggan berlangganan?
  if (apakah_berlangganan == 0)
  {
    // Kalkulasi total lembar untuk pelanggan yang berlangganan
    harga_perlembar = 75;
    total_harga = input_lembar_photocopy * harga_perlembar;
  }

  // Check apakah pelanggan tidak berlangganan dan dia memfotocopy dibawah 100
  if (apakah_berlangganan != 0 && input_lembar_photocopy < 100)
  {
    harga_perlembar = 100;
    total_harga = input_lembar_photocopy * harga_perlembar;
  }

  // Check apakah pelanggan tidak berlangganan dan dia menfotocopy lebih dari atau sama dengan 100
  if (apakah_berlangganan != 0 && input_lembar_photocopy >= 100)
  {
    harga_perlembar = 85;
    total_harga = input_lembar_photocopy * harga_perlembar;
  }

  // Print Total Harga
  printf("Harga Perlembar: %d\n", harga_perlembar);
  printf("Total Harga: %2.lf\n", total_harga);
}
