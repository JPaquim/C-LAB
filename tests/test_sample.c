#include "sample.h"

void test_sample(void) {
    initializeRNG();
    FILE *fp = fopen("randomFloats", "w");
    for (size_t i = 0; i < 10000; ++i) {
        fprintf(fp, "%f\n", sample_exponential(2));
    }
    fclose(fp);
}
