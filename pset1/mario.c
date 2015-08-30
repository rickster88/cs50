#include <cs50.h>
#include <stdio.h>

int getHeight();
int printBlocks();

int main(void) {
  int height = getHeight();
  printBlocks(height);
}

int getHeight() {
  int height;
  while (height < 1 || height > 23) {
    printf("Input a number between 1 and 23: ");
    height = GetInt();
  }
  
  return height;
}

int printBlocks(int height) {
  int spaces = height - 1;
  int blocks = 2;
  
  for (int i = 0; i < height; i++) {
    for (int i = 0; i < spaces; i++) {
      printf(" ");
    }
    for (int i = 0; i < blocks; i++) {
      printf("#");
    }
    printf("\n");
    spaces--;
    blocks++;
  }
}
