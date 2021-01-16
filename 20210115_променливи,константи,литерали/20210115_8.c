#include <stdio.h>
const char c_newLine = '\n';
const unsigned c_maxLoopCount = 1024 * 0xFFFF;
const double c_value = 1.0L / 3.0;
int main(void)
{
    printf("Constant: c_uMAX_LOOP_COUNT = %d %c", c_maxLoopCount, c_newLine);
    printf("Constant: c_dfREAL_VALUE = %lf %c", c_value, c_newLine);
    return 0;
}