#include <stdio.h>
int a,b,c;
int main()
{
	scanf("%d %d %d",&a,&b,&c);
	asm(
		".intel_syntax noprefix\n\t"
		"mov rax, qword ptr a[rip]\n\t"
		"sub rax, qword ptr b[rip]\n\t"
		"imul rax, qword ptr c[rip]\n\t"
		"mov qword ptr a[rip], rax\n\t"
		".att_syntax\n\t"
	);
	printf("%d",a);
	return 0;
}
