#include "libft.h"

void	*ft_memset(void *p, int c, size_t n)
{
	size_t	i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)p;
	while (i++ < n)
		*ptr++ = c;
	return (p);
}
