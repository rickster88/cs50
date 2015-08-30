#include <stdlib.h>
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[]) {
  if (argc != 2)
    return 1;
  
  string key = argv[1];
  for (int i = 0; i < strlen(argv[1]); i++) {
    if ((key[i] >= 0 && key[i] < 'A') ||
        (key[i] > 'Z' && key[i] < 'a') ||
        (key[i] > 'z' && key[i] < 127)) {
      return 1;
    }
  }

  string s = GetString();

  for (int i = 0, j = 0; i < strlen(s); i++) {
    if ((s[i] >= 'A' && s[i] <= 'Z') ||
        (s[i] >= 'a' && s[i] <= 'z')) {
      char keyChar = key[j % strlen(key)];
    
      int keyInt = 0;
      if (keyChar >= 'A' && keyChar <= 'Z')
        keyInt = keyChar - 'A';
      if (keyChar >= 'a' && keyChar <= 'z')
        keyInt = keyChar - 'a';
    
      if (s[i] >= 'A' && s[i] <= 'Z')
        s[i] = 'A' + ((s[i] - 'A' + keyInt) % 26);
      if (s[i] >= 'a' && s[i] <= 'z')
        s[i] = 'a' + ((s[i] - 'a' + keyInt) % 26);

      j++;
    }
  }
  printf("%s\n", s);
  return 0;
}
