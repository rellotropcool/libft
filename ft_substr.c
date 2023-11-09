#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	slen;

	i = 0;
	slen = ft_strlen(s);
	if (slen <= start)
		str = malloc(sizeof(char));
	else if (slen - start > len)
		str = malloc((len + 1) * sizeof(char));
	else
		str = malloc((slen - start + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (slen > start && s[start + i] && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = 0;
	return (str);

}
