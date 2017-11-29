#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define size_buf 4096

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
char *readfichier(int fd)
{
	int ret;
	char buf[size_buf];
	ret = 0;
	while ((ret = read(fd, buf, size_buf)))
	{
		buf2[ret2] = '\0';
		if (ret2 > 544)
		{
			write(2,"ERROR2",6);
			return (0);
		}
	}
	return (buf);
}
void verifintru(char *buf)
{
	int i;
	i = 0;
	if (buf[i] != '.' && buf[i] != '#' && buf[i] != '\n')
	{
		write(2, "ERROR3", 6);
		return (0);
	}
}
void verifnbrpoint(char *buf)
{
	
	if (buf[i] == '.')
		{
			if (r > 12)
			{
				write(2, "ERROR4", 6);
				return (0);
			}
			r++;
			}
int	verifierfichier(char *str)
{
	int		fd;
	int		i;
	int		j;
	int		n;
	int		r;
	char	buf[size_buf + 1];

	i = 0;
	j = 0;
	r = 0;
	n = 0;
	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		write(2,"ERROR1",6);
		return (0);
	}
	else
	{
		buf = readfichier(fd);
		while (buf[i] != '\0')
		{
			verifintru(buf);
			verifnbrpoint(buf);
			if (buf[i] == '#')
			{
				if ( n > 4)
				{
					write(2, "ERROR5", 6);
					return (0);
				}
				n++;
			}
			if (buf[i] == '\n' && (i % 5 == 0))
				j++;
			if (buf[i] == '#' && buf[i + 1] != '#' &&  buf[i - 1] != '#' && buf[i + 1] != '\n' && buf[i + 5] != '#' && buf[i - 5] != '#')
			{
				write(2, "ERROR6", 6);
				return (0);
			}
			if (buf[i] == '\n' && buf[i-1] == '#' && buf[i - 2] != '#'&& buf[i+1] != '\n' && buf[i+1] != '\0'  && buf[i + 1] != '#' && buf[i + 2] != '#' && buf[i+3] != '#' && buf[i+4] != '#')
			{
				write(2, "ERROR7", 6);
				return (0);
			}
			if (buf[i] == '\n' && (i % 5 != 0) && (j % 4 != 0)) 
			{
				write(2, "ERROR8", 6);
				return (0);
			}
			if (j % 4 == 0 && n < 4)
			{
				write(2,"ERROR9", 6);
				return (0);
			}
			if (buf[i] == '\n' && buf[i+1] == '\n'&& (j % 4 == 0))
			{
				n = 0;
				r = 0;
			}
			i++;
		}
		if (buf[i] == '\0')
			write(1,"ok",2);
	}
	return (1);
}

int main(int argc, char** argv)
{
	char	usage[] = "usage: cp [-R [-H | -L | -P]] [-fi | -n] [-apvX]";
	if (argc != 2)
	{
		write(2, usage, ft_strlen(usage));
		return (0);
	}
	if (argc == 2)
		verifierfichier(argv[1]);

	return (0);
}
