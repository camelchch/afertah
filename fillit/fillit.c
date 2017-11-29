void lettres(char *buf2)
{
	while (buf2[i] != '\0')
	{
		if (buf2[i] == '\n' && buf[i+1] == '\n')
			alph++;
		if (buf2[i] == '#')
			buf2[i] = 'A'+ alph;
		i++;
	}
}
char **tetrimos(char *buf2)
{
	typedef struct listposition
	{
		int	x = 0;
		int	y = 0;
	}			position;
	while (buf2[i] != '\0')
	{
		if (buf2[i] != '.' && buf2[i] != '\n' && buf2[i] != '\0')
		{
			position.x = col;
			position.y = l;
		}
		if (buf2[i] == '\n' && buf2[i+1] != '\n' && buf2[i + 1] != '\0')
			{
				l++;
				col = 0;
			}
		if (buf2[i] == '\n' && buf2[i + 1] == '\n')
			{
				l = 0;
				col = 0;
				position.x = 0;
				position.y = 0;
			}

