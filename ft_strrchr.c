#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int	i;

	i = 0;
	str = (char *)s;
	if (!ft_isprint(c) && c)
		return (str);
	while (*str)
	{
		i++;
		str++;
	}
	while (i >= 0)
	{
		if (*str == c)
			return (str);
		str--;
		i--;
	}
	return (NULL);
}
