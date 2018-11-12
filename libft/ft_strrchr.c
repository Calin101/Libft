/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: calin <calin@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 12:50:45 by calin        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/18 19:01:48 by calin       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	int i;

	i = ft_strlen(src);
	while (i >= 0)
	{
		if (src[i] == c)
			return ((char *)src + i);
		i--;
	}
	return (NULL);
}
