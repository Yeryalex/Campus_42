int	ft_isascii(int c)
{
	if (c == 0)
		return (1);
	if (c >= 1 && c <= 127)
		return (c);
	return (0);
}
