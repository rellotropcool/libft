#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = -1;
	if (size > 0)
	{
		while (++i < size - 1 && src[i])
			dest[i] = src[i];
		dest[i] = 0;
	}
	i = 0;	
	while (src[i])
		i++;
	return (i);
}
