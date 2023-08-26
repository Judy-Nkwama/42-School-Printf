#include "ft_printf.h"

int	putstr(char *s)
{	
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			putchar(s[i]);
			i++;
		}
	}
	return (i);
}
