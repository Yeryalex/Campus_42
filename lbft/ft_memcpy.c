#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*destination;
	unsigned char	*origin;

	if (!dest && !src)
		return (NULL);
	destination = (unsigned char *)dest;
	origin = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		*destination++ = *origin++;
		i++;
	}
	return (dest);
}
