#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) {
  printf("Enter your name: ");
  string name = GetString();

  char initials[8] = {name[0]};
  for (int i = 0; i < strlen(name); i++) {
    if (name[i] == ' ') {
      char initial[2] = {name[i+1], '\0'};
      strcat(initials, initial);
    }
  }
  printf("Initials: %s\n", initials);
}
