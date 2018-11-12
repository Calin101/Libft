/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: calin <calin@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 13:56:34 by calin        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/18 19:01:17 by calin       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
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
			dest[i] = (*f)(i, str[i]);
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	return (0);
}
