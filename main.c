# include <stdio.h>
# include "ft_printf.h"

int main(){
	unsigned int a = 30;
	int l = printf("prt1: %x\n", a);
	int ftl = ft_printf("prt2: %x\n", a);
	printf("len: %d\n", l);
	printf("ft_len: %d\n", ftl);
}