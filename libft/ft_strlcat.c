/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: calin <calin@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/16 11:32:45 by calin        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 14:39:42 by calin       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t i;
	size_t lensrc;
	size_t lendest;

	i = 0;
	lensrc = ft_strlen(src);
	lendest = ft_strlen(dest);
	if (len == 0)
		return (lensrc);
	if (len - 1 < lendest)
		return (lensrc + len);
	while (src[i] && lendest + i < len - 1)
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (lendest + lensrc);
}
