#include <stdio.h>

int main() {
  char str[100];
  int i, j, count;

  printf("Enter a string: ");
  scanf("%s", str);

  int freq[256] = {0};

  for (i = 0; str[i] != '\0'; i++) 
  {
    freq[str[i]]++;
  }

  for (i = 0; i < 256; i++)
  {
    if (freq[i] > 0) 
    {
      printf("%c Use %d times\n", i, freq[i]);
    }
  }

}
