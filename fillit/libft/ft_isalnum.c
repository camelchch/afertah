int	ft_isalnum(int c)
{
	if(!((c <= 'z' && c >= 'a' ) || (c <= 'Z' && c >= 'A') || (c <= '9' && c >=
'0')))
		return (0);
return (1);
}
