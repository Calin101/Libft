/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: calin <calin@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 13:30:12 by calin        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/18 19:01:13 by calin       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *str, char (*f)(char))
{
	int		i;
	char	*dest;

	i = 0;
	if (str != NULL)
	{
		if ((dest = (char *)malloc(sizeof(*dest) *
		(ft_strlen(str) + 1))) == NULL)
			return (NULL);
		while (str[i])
		{
			dest[i] = (*f)(str[i]);
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	return (0);
}
