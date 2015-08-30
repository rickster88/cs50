#include <stdlib.h>
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[]) {
  if (argc != 2)
    return 1;

  printf("Enter text: ");
  string s = GetString();
  
  int key = atoi(argv[1]);
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] >= 'A' && s[i] <= 'Z')
      s[i] = 'A' + ((s[i] - 'A' + key) % 26);
    if (s[i] >= 'a' && s[i] <= 'z')
      s[i] = 'a' + ((s[i] - 'a' + key) % 26);
  }
  printf("%s\n", s);
  return 0;
}
