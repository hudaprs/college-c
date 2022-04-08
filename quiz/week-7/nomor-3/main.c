#include <stdio.h>

void set_string(char str[])
{
  fgets(str, sizeof(str), stdin);
}

void main()
{
  char lulus[50] = "Lulus";
  char tidak_lulus[50] = "Tidak Lulus";
  char nim[100], nama[100], mata_kuliah[100], keterangan[100];
  int nilai_tugas, nilai_uts, nilai_uas;
  float nilai_akhir;

  // ===================================== INPUT SECTION

  printf("==========INPUT DATA MAHASISWA==========\n");

  // NIM
  printf("NIM: ");
  fgets(nim, sizeof(nim), stdin);

  // Nama
  printf("Nama: ");
  fgets(nama, sizeof(nama), stdin);

  // Mata Kuliah
  printf("Mata Kuliah: ");
  fgets(mata_kuliah, sizeof(mata_kuliah), stdin);

  // Nilai Tugas
  printf("Nilai Tugas: ");
  scanf("%d", &nilai_tugas);

  // Nilai UTS
  printf("Nilai UTS: ");
  scanf("%d", &nilai_uts);

  // Nilai UAS
  printf("Nilai UAS: ");
  scanf("%d", &nilai_uas);

  // Hitung Nilai Akhir
  nilai_akhir = (nilai_tugas * 0.2) + (nilai_uts * 0.3) + (nilai_uas * 0.5);

  // Assign nilai keterangan dari pengechekan nilai akhir
  if (nilai_akhir >= 80)
  {
    strcpy(keterangan, lulus);
  }
  else if (nilai_akhir >= 70 && nilai_akhir <= 79)
  {
    strcpy(keterangan, lulus);
  }
  else if (nilai_akhir >= 60 && nilai_akhir <= 69)
  {
    strcpy(keterangan, lulus);
  }
  else if (nilai_akhir >= 50 && nilai_akhir <= 59)
  {
    strcpy(keterangan, lulus);
  }
  else
  {
    strcpy(keterangan, tidak_lulus);
  }

  // ===================================== END INPUT SECTION

  // ===================================== RESULT SECTION

  printf("==========HASIL DATA MAHASISWA==========\n");

  // NIM
  printf("NIM: %s \n", nim);

  // Nama
  printf("Nama: %s \n", nama);

  // Mata Kuliah
  printf("Mata Kuliah: %s \n", mata_kuliah);

  // Nilai Tugas
  printf("Nilai Tugas: %d \n \n", nilai_tugas);

  // Nilai UTS
  printf("Nilai UTS: %d \n \n", nilai_uts);

  // Nilai UAS
  printf("Nilai UAS: %d \n \n", nilai_uas);

  // Nilai Akhir
  printf("Nilai Akhir: %.2f \n \n", nilai_akhir);

  // Keterangan
  printf("Keterangan: %s \n \n", keterangan);

  // ===================================== END RESULT SECTION
}