#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void	print_message(int s)
{
	static int	size;
	static char c;

	if(s == SIGUSR1)
		c += (1 << (7 - size++));
	else
		c += (0 << (7 - size++));
	if(size == 8)
	{
		write(1, &c, 1);
		size = 0;
		c = 0;
	}
}

int	main(void)
{
	printf("pid: %d\n", getpid());
	signal(SIGUSR1, print_message);
	signal(SIGUSR2, print_message);
	while(1);
	return(0);
}
