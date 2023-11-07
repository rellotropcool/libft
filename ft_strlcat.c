#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	dlen = 0;
	slen = 0;
	while (src[slen])
		slen++;
	while (dest[dlen])
		dlen++;
	if (size <= 0)
		return (slen);
	i = -1;
	if (size > dlen)
	{
		while (++i < size - dlen - 1 && src[i])
			dest[dlen + i] = src[i];
		dest[dlen + i] = 0;
		return (slen + dlen);
	}
	return (size + slen);
}
