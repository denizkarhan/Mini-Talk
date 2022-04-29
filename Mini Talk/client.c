#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>

void	push_server(int	pid, char *str)
{
	int	size = 8;
	int	i = 0;
	int	dongu = strlen(str);

	while(dongu--)
	{
		while(size--)
		{
			if(((str[i] >> size) & 1) == 0)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			usleep(70);
		}
		size = 8;
		i++;
	}
}

int	main(int ac, char **av)
{
	if(ac != 3)
		write(1, "Arguments numbers error!\n", 25);
	else
	{
		if(atoi(av[1]))
			push_server(atoi(av[1]), av[2]);
		else
			write(1, "Pid Number Error!\n", 18);
	}
	return (0);
}
