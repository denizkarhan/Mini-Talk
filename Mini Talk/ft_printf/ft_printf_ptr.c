#include "ft_printf.h"

int	ptr_len(unsigned long long p)
{
	int	i;

	i = 0;
	while (p)
	{
		p = p / 16;
		i++;
	}
	return (i);
}

void	write_ptr(unsigned long long p)
{
	if (p)
		if (p / 16 != 0)
			write_ptr(p / 16);
	if (p % 16 < 10)
		ft_printchar(p % 16 + 48);
	else
		ft_printchar(p % 16 + 87);
}

int	ft_print_ptr(unsigned long long p)
{
	write (1, "0x", 2);
	if (!p)
	{
		ft_printchar ('0');
		return (3);
	}
	else
		write_ptr (p);
	return (ptr_len(p) + 2);
}