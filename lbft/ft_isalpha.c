#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (c);
	return (0);
}
/*
int main()
{
		int x = 12;
	
	if (ft_isalpha(x))
		printf("Correct!\n");
	else
		printf("IS NOT ALPHA!\n");
	return (0);
}*/
