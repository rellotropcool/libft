#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*ptr;
	const unsigned char	*ptr2;

	ptr = (unsigned char*)dest;
	ptr2 = (unsigned char*)src;
	i = 0;
	if (ptr2 < ptr)
		while (i++ < n)
			ptr[n - i] = ptr2[n - i];
	else
		while (i++ < n)
			*(ptr++) = *(ptr2++);
	return (dest);
}
