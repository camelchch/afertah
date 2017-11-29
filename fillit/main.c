#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
void	ft_putstr_fd(char const *str, int fd)
{
	int	i;

	i = 0;
	if (str && fd)
	{
		while (str[i] != '\0')
		{
			write(fd, &str[i], 1);
			i++;
		}
	}
}

int main()
{
	int fd;
	fd = open("fichier_non_valid", O_CREAT | O_RDWR , S_IRUSR | S_IWUSR);
	if (fd == -1)
		write(2,"ERROR",5);
	else
		ft_putstr_fd("....\n....\n####\n....\n\n...#\n...#\n...#\n...#\n", fd);
	return (0);
}
