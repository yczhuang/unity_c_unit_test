#include "unity.h"


void setUp(void) {
  /* set stuff up here */
  printf("set up test environment.\n");
}

void tearDown(void) {
  /* clear stuff up here */
  printf("tear down test environemnt.\n");
}

void test_function_should_doBlahAndBlah(void) {
  /* test stuff */
  printf("do Blah and Blah.\n");
}

void test_function_should_doAlsoDoBlah(void) {
  /* more test stuff */
  printf("do Also Blah.\n");
}

/* not needed when using generate_test_runner.rb */
int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_function_should_doBlahAndBlah);
  RUN_TEST(test_function_should_doAlsoDoBlah);
  return UNITY_END();
}
