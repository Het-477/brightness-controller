#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define PATH "/sys/class/backlight/intel_backlight/brightness"

int main() {
  FILE *fp = fopen(PATH, "w");
  char buffer[24] = {"9600"}; // default brightness level if somehow the brightness input dosent get initialized.

  //  fp = NULL;

  if (fp == NULL) {
    perror("Error opening file: " PATH);
    return EXIT_FAILURE;
  }

  fputs("12900", fp);

  /* while (fgets(buffer, sizeof(buffer), fp) != NULL) { */
  /*   printf("%s", buffer); */
  /* } */

  fclose(fp);

  //   for(int i = 0; )

  return 0;
}
