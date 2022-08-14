#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>

int	main(int ac, char **av)
{
        int	mask;
	int	i = -1;
        
        if(ac != 3)
		return (write(1, "Arguments numbers error!\n", 25));  
	while(++i < strlen(av[2]))
	{
                mask = 128;
		while(mask > 0 && usleep(70))
		{
			!(av[2][i] & mask) ? kill(pid, SIGUSR2) : kill(pid, SIGUSR1);
                        mask /= 2;
		}
	}
	return (0);
}
