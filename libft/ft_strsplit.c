/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: calin <calin@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 14:11:20 by calin        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 17:32:12 by calin       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_return_str(int count, int c, const char *str, char **tab)
{
	int i;
	int j;
	int start;
	int len;

	i = 0;
	j = 0;
	while (count >= 0)
	{
		while (str[i] == c)
			i++;
		start = i;
		len = 0;
		while (str[i] != c && str[i] != '\0')
		{
			i++;
			len++;
		}
		if (!(tab[j] = ft_strsub(str, start, len)))
			return (NULL);
		j++;
		count--;
	}
	return (tab);
}

char		**ft_strsplit(char const *str, char c)
{
	int		i;
	int		count;
	char	**tab;

	i = 0;
	if (!str)
		return (NULL);
	count = ft_countwords(str, c);
	if ((tab = malloc(sizeof(char *) * (count + 1))) == NULL)
		return (NULL);
	tab[count] = (char *)'\0';
	count--;
	return (ft_return_str(count, c, str, tab));
}
