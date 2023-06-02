#include "s21_tests.h"

START_TEST(simple_copy) {
  char s21_dest[5] = "";
  const char s21_src[] = "12345";
  const char src[] = "12345";
  char dest[5] = "";
  s21_size_t n = 3;

  ck_assert_str_eq(s21_memcpy((void *)s21_dest, s21_src, n), memcpy((void *)dest, src, n));
}
END_TEST

START_TEST(n_zero) {
  char s21_dest[5] = "";
  const char s21_src = "12345";
  const char src[] = "12345";
  char dest[5] = "";
  s21_size_t n = 0;

  ck_assert_str_eq(s21_memcpy((void *)s21_dest, s21_src, n),memcpy((void *)dest, src, n));
}
END_TEST

Suite* suite_memcpy() {
  Suite* suite = suite_create("memcpy_suite");
  TCase* tcase_core = tcase_create("memcpy_tc");

  tcase_add_test(tcase_core, simple_copy);
  tcase_add_test(tcase_core, n_zero);

  suite_add_tcase(suite, tcase_core);
  return suite;
}