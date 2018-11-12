/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memalloc.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: calin <calin@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 16:43:10 by calin        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/18 18:58:40 by calin       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t len)
{
	char *tmp;

	if ((tmp = (char *)malloc(sizeof(*tmp) * len)) == NULL)
		return (NULL);
	ft_bzero(tmp, len);
	return (tmp);
}
