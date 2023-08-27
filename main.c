# include <stdio.h>
# include "ft_printf.h"

int main(){
	unsigned int a = 0x455;
	int l = printf("prt1: %i\n", a);
	int ftl = ft_printf("prt2: %i\n", a);
	printf("len: %d\n", l);
	printf("ft_len: %d\n", ftl);
}