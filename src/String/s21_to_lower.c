#include <stdlib.h>

#include "s21_string.h"

void *s21_to_lower(const char *str) {
  if (!str || *str == '\0') {
    return s21_NULL;
  }
  int len = s21_strlen(str);
  char *copy_str = (char *)malloc((len + 1) * sizeof(char));
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      copy_str[i] = str[i] + 32;
    } else {
      copy_str[i] = str[i];
    }
  }
  return (copy_str);
}
