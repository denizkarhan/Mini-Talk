#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_printchar(int c);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_printchar_hex(unsigned int x, char format);
int		ft_print_unsigned_char(unsigned int u);
int		ft_print_ptr(unsigned long long p);
int		ptr_len(unsigned long long p);
void	print_nbr(int n);
void	write_ptr(unsigned long long p);

#endif