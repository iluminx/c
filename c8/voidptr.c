#include<stdio.h>
void showbyte(void* addr, int bytes)
{
	while(bytes-->0)
		printf("%02x ",*(unsigned char*)addr++);
		printf("\n");
}
int main()
{
	int n=1234567890;
	float f=1234567890;
	double d=1234567890;
	short s=1234567890;//会产生类型的截断
//	printf("%x, %hx\n",n,s);
	showbyte(&n,sizeof(n));
	showbyte(&f,sizeof(f));
	showbyte(&d,sizeof(d));
	showbyte(&s,sizeof(s));
	return 0;
}
