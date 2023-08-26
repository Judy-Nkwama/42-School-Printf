#include "ft_printf.h"

void	print_hex(unsigned long long int n, char *hex_chars, int *i)
{
	if (n >= 16)
        print_hex(n / 16, hex_chars, i);
    putchr(hex_chars[n % 16]);
    *i = *i + 1;
}

int	putptr(void *ptr)
{
	char                        *hex_chrs;
	unsigned long long int		lliptr;
	int							i;

	i = 0;
	lliptr = (unsigned long long int)ptr;
	hex_chrs = "0123456789abcdef";
	write(1, "0x", 2);
	putptr(lliptr, hex_chrs, &i);
	return (i + 2);
}
