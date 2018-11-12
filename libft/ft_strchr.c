/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: calin <calin@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 12:10:48 by calin        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/29 14:17:54 by calin       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	unsigned int i;
	unsigned int len;

	len = ft_strlen(src);
	i = 0;
	if (c == '\0')
		return ((char *)src + len);
	while (src[i])
	{
		if (src[i] == c)
			return ((char *)src + i);
		i++;
	}
	return (NULL);
}
