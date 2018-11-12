/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: calin <calin@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 13:04:31 by calin        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/18 19:01:45 by calin       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *s2, size_t len)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	if (s2[i] == '\0')
		return ((char *)src);
	while (src[i] && i < len)
	{
		j = 0;
		while (s2[j] == src[i + j] && (i + j) < len)
		{
			if (s2[j + 1] == '\0')
				return ((char *)src + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
