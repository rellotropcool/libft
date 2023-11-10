#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	cpt;

	i = 0;
	cpt = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			cpt++;
		while (s[i] != c && s[i])
			i++;
	}
	return (cpt);
}

void	ncpy(char *dest, const char *src, int n)
{
	int	i;

	i = 0;
	while(i < n)
	{
		dest[i] = src[i];
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	len;
	char	**str;

	i = 0;
	j = 0;
	str = malloc((count_words(s, c) + 1) * sizeof(char*));
	if (!str)
		return (NULL);
	while (s[i])
	{
		len = 0;
		while(s[i] == c)
			i++;
		while (s[i + len] != c && s[i + len])
			len++;
		if (len)
		{
			str[j] = malloc((len + 1) * sizeof(char));
			if (!str[j])
					return (NULL);
			ncpy(str[j], &s[i], len);
			str[j][len] = 0;
			j++;
			i += len;
		}
	}
	str[j] = 0;
	return (str);
}
