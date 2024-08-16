#include <stdio.h>
#include <string.h>

void sort(char names[10][100], int n) {
  char temp[100];
  int i, j;

  for (i = 1; i < n; i++) {
    strcpy(temp, names[i]);
    j = i - 1;

    while (j >= 0 && strcmp(names[j], temp) > 0) {
      strcpy(names[j + 1], names[j]);
      j = j - 1;
    }
    strcpy(names[j + 1], temp);
  }

  // Print sorted names
  for (i = 0; i < n; i++) {
    printf("Name %d: %s\n", i + 1, names[i]);
  }
}

int main() {
  char names[10][100];

  printf("Enter 10 names:\n");
  for (int i = 0; i < 10; i++) {

    fgets(names[i], 100, stdin);

    size_t length = strlen(names[i]);
    if (length > 0 && names[i][length - 1] == '\n') {
      names[i][length - 1] = '\0';
    }
  }

  sort(names, 10);
  return 0;
}
