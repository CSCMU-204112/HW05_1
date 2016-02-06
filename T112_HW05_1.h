#include <stdio.h>


#define A_CUTOFF 80
#define B_CUTOFF 70
#define C_CUTOFF 60
#define D_CUTOFF 50
#define UNIT 2

void frequency_cnt(int* cnt_A, int* cnt_B,
                   int* cnt_C, int* cnt_D, int *cnt_F);

void show_histogram(int cnt_A, int cnt_B,
                    int cnt_C, int cnt_D, int cnt_F);
