#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool checkCity (char cityCode[100], char needle[100]); 
void getCity(char cityCode[100]);
void loopCity(char city[10]);

// For checking city exists
bool checkCity(char cityCode[100], char needle[100]) {
  return strcmp(cityCode, needle) == 0;
}

// To loop city inside of array
void loopCity(char cities[10]) {
  for(int i = 0; i < 10; ++i) {
    printf("%c ", cities[i]);
  }
}

// Get city by city code
void getCity(char cityCode[100]) {
  char cities[10][10] = {
    { 'B', 'A', 'N', 'T', 'E', 'N' },
    { 'J', 'A', 'K', 'A', 'R', 'T', 'A' },
    { 'B', 'A', 'N', 'D', 'U', 'N', 'G' },
    { 'C', 'I', 'R', 'E', 'B', 'O', 'N' },
    { 'B', 'O', 'G', 'O', 'R' },
    { 'P', 'E', 'K', 'A', 'L', 'O', 'N', 'G', 'A', 'N' },
    { 'S', 'E', 'M', 'A', 'R', 'A', 'N', 'G' },
    { 'S', 'U', 'R', 'A', 'B', 'A', 'Y', 'A' },
    { 'M', 'A', 'L', 'A', 'N', 'G' },
    { 'T', 'E', 'G', 'A', 'L' },
  };

  // A = Banten
  if(checkCity(cityCode, "A")) loopCity(cities[0]);

  // B = Jakarta
  if(checkCity(cityCode, "B")) loopCity(cities[1]);

  // D = Bandung
  if(checkCity(cityCode, "D")) loopCity(cities[2]);

  // E = Cirebon
  if(checkCity(cityCode, "E")) loopCity(cities[3]);

  // F = Bogor
  if(checkCity(cityCode, "F")) loopCity(cities[4]);

  // G = Pekalongan
  if(checkCity(cityCode, "G")) loopCity(cities[5]);

  // H = Semarang
  if(checkCity(cityCode, "H")) loopCity(cities[6]);

  // L = Surabaya
  if(checkCity(cityCode, "L")) loopCity(cities[7]);

  // N = Malang
  if(checkCity(cityCode, "N")) loopCity(cities[8]);

  // T = Tegal
  if(checkCity(cityCode, "T")) loopCity(cities[9]);
}

int main() {
  char *codes[] = {"A", "B", "D", "E", "F", "G", "H", "L", "N", "T"};
  char selectedCityCode[100];
  int isCityCodeExists = -1;

  printf("Enter city code: ");
  scanf("%[^\n]s", selectedCityCode);
  
  for(int i = 0; i < 10; i++) {
    if(strcmp(selectedCityCode, codes[i]) == 0) {
      strcpy(selectedCityCode, codes[i]);
      isCityCodeExists = 1;
    } 
  }

  if(isCityCodeExists == 1) {
    getCity(selectedCityCode);
  }

  if(isCityCodeExists == -1) {
    printf("Warning: City code of %s not found", selectedCityCode);
  }

  return 0;
}
