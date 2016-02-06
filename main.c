#include "T112_HW05_1.h"


int main()
{
    int cnt_A = 0;
    int cnt_B = 0;
    int cnt_C = 0;
    int cnt_D = 0;
    int cnt_F = 0;

    frequency_cnt(&cnt_A, &cnt_B,
                  &cnt_C, &cnt_D, &cnt_F);
    show_histogram(cnt_A, cnt_B, cnt_C, cnt_D, cnt_F);
    return 0;
}
