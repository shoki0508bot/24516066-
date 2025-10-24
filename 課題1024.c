#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("double型の最大値：%Le\n",LDBL_MAX);
    printf("long double型の最大値：%Le\n",LDBL_MAX);
    printf("long double型の最低値：%d\n",LDBL_DIG);

    return 0;
}