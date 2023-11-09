#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	if (!c)
	{
		while (*str)
			str++;
		return (str);
	}
	if (!ft_isprint(c))
		return (str);
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (NULL);
}
