/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: calin <calin@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 12:26:17 by calin        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/18 18:58:45 by calin       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	unsigned char	*tmpdest;
	unsigned char	*tmpsrc;
	size_t			i;

	i = 0;
	tmpdest = (unsigned char *)dest;
	tmpsrc = (unsigned char *)src;
	while (i < len)
	{
		tmpdest[i] = tmpsrc[i];
		if (tmpsrc[i] == (unsigned char)c)
			return (tmpdest + i + 1);
		i++;
	}
	return (NULL);
}
