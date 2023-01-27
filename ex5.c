#include <stdio.h>
#include <string.h>

int main(void) {
  char str[] = "hello";
  int len;
  len = strlen(str);
  printf("%c:%d", str, len);
  return 0;
}