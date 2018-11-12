/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memrcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: calin <calin@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:03:45 by calin        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/18 18:59:26 by calin       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrcpy(void *dest, const void *src, size_t len)
{
	size_t i;

	i = len;
	while (i > 0)
	{
		i--;
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	}
	return ((unsigned char *)dest);
}
