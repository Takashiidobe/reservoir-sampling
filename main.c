#include <stdio.h>
#include <stdlib.h>

#define INPUT_LEN 100
#define OUTPUT_LEN 5
#define TIMES 10000

void reservoir_sampling(int* input, int* output) {
  for (int i = 0; i < OUTPUT_LEN; i++) {
    output[i] = input[i];
  }

  // we don't need to know the input length, this can be a while loop.
  for (int i = OUTPUT_LEN; i < INPUT_LEN; i++) {
    size_t j = arc4random_uniform(i);
    if (j < OUTPUT_LEN) {
      output[j] = input[i];
    }
  }
}

void print_sample(int* output) {
  for (int i = 0; i < OUTPUT_LEN - 1; i++) {
    printf("%d,", output[i]);
  }
  printf("%d\n", output[OUTPUT_LEN-1]);
}

int main(void) {
  int input[INPUT_LEN];

  for (int i = 0; i < INPUT_LEN; i++) {
    input[i] = i + 1;
  }

  int output[OUTPUT_LEN];

  for (int i = 0; i < TIMES; i++) {
    reservoir_sampling(input, output);
    print_sample(output);
  }
}
