#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>

int	main(int ac, char **av)
{
        int	mask;
	int	i = -1;
        
        if(ac != 3)
		write(1, "Arguments numbers error!\n", 25);  
	while(++i < strlen(av[2]))
	{
                mask = 128;
		while(mask > 0)
		{
			if((av[2][i] & mask) == 0)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			usleep(70);
                        mask /= 2;
		}
	}
	return (0);
}
