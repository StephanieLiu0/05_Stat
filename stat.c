#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>


int main() {
  struct stat buff;
  stat( "stat.c", &buff);

  printf("\nFile size: %lld B\n", buff.st_size);
  float kb = buff.st_size / 1000.0;
  float mb = buff.st_size / 1000000.0;
  float gb = buff.st_size / 1000000000.0;
  printf("%f KB, %f MB, %f GB\n", kb, mb, gb);

  printf("File permissions: %o\n", buff.st_mode);

  printf("Last accessed: %s\n", ctime(&buff.st_atime));

  return 0;
}
