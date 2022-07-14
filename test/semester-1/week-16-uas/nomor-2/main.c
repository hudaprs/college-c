#include <stdio.h>
#include <string.h>

char getCities(char cityCode);

char getCities(char cityCode) {
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
    { 'T', 'E', 'G', 'A', 'L' },
    { 'T', 'E', 'G', 'A', 'L' },
  };
}

int main() {
  char codes[] = {'A', 'B', 'D', 'E', 'F', 'G', 'H', 'L', 'N', 'T'};

  // for(int i = 0; i < 10; i++) {
  //   if(strcmp(selectedCityCode, codes[i]) == 0) {
  //     printf("AAAA %c \n", codes[i]);
  //     getCities(selectedCityCode);
  //     break;
  //   } else {
  //     printf("Warning: City code of %c not found", selectedCityCode);
  //     break;
  //   }
  // }

  return 0;
}