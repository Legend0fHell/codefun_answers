#include <stdio.h>
int n;
int main()
{
    scanf("%d",&n);
    asm
    (
        ".intel_syntax noprefix\n\t"
        "mov rax, qword ptr n[rip]\n\t"
        "shl rax\n\t"
        "mov qword ptr n[rip], rax\n\t"
        ".att_syntax\n\t"
    );
    printf("%d",n);
    return 0;
}