#include <stdio.h>
#include<string.h>

int main() {
  char s1[10] = "hi";
  char s2[] = "hi"
  char s3[] = {'h', 'i', '\0'};

  printf("%zu %zu\n", sizedf(s1), strlen(s1));
  printf("%zu %zu\n", sizedf(s2), strlen(s2));
  printf("%zu %zu\n", sizedf(s3), strlen(s3));

  return 0;
}
