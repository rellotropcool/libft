#include "libft.h"

char	*ft_strdup(const char *s)
{
	int	len;
	int	i;
	char	*str;

	len = ft_strlen(s);
	i = 0;
	str = malloc((len + 1) * sizeof(char));
	while(s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
