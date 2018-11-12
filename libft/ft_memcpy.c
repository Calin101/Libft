/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: calin <calin@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 11:56:57 by calin        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/18 18:59:07 by calin       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*tmpdest;
	unsigned char	*tmpsrc;

	i = 0;
	tmpdest = (unsigned char *)dest;
	tmpsrc = (unsigned char *)src;
	while (i < len)
	{
		tmpdest[i] = tmpsrc[i];
		i++;
	}
	return (tmpdest);
}
