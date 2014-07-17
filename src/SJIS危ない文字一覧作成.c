// SJISŠë‚È‚¢•¶šˆê——ì¬ 
 
#include <stdio.h>

void print_a_line(unsigned char lo)
{
	unsigned hi;
	for(hi=0x81; hi<=0x9f; hi++){
		printf("%c%c", hi, lo);
	}
	printf(" ");
	for(hi=0xe0; hi<=0xfc; hi++){
		printf("%c%c", hi, lo);
	}
}

int main()
{
	unsigned char lo;
	
	printf("		");
	printf(  "81.2.3.4.5.6.7.8.9.a.b.c.d.e..");
	printf("90.1.2.3.4.5.6.7.8.9.a.b.c.d.e.. ");
	printf("e0.1.2.3.4.5.6.7.8.9.a.b.c.d.e..");
	printf("f0.1.2.3.4.5.6.7.8.9.a.b.c\n");

	for(lo=0x40; lo<=0x7e; lo++){
		printf("xx%x(%c) ", lo, lo);
		print_a_line(lo);
		printf("\n");
	}
	return 0;
}