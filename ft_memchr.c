#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	c2;
	size_t	i;

	ptr = (unsigned char*)s;
	i = 0;
	c2 = (unsigned char)c;
	if (!n)
		return (NULL);
	while (i < n)
	{
		if (*ptr == c2)
			return (ptr);
		ptr++;
		i++;
	}
	return (NULL);
}
