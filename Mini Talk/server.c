#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int size = 128;

void	print_message(int s)
{
	static char c;

	if(s == SIGUSR1)
		c += size;
	size /= 2;
	if(size == 0)
	{
		write(1, &c, 1);
		size = 128;
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
