#include <stdio.h>

int main()
{
    int var;
    int *ptr;
    scanf("%d", &var);
    ptr = &var;

    printf("Nilai variabel = %d\n", var);
    printf("Alamat variabel = %p\n", &var);
    printf("Nilai melalui Pointer = %d\n", *(&var));

    *ptr = *ptr * 2;
    printf("Nilai setelah diubah lewat pointer = %d\n", *ptr);
    return 0;
}
