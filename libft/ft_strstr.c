/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: calin <calin@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 17:32:07 by calin        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/18 19:01:58 by calin       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *src, const char *s2)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	if (s2[i] == '\0')
		return ((char *)src);
	while (src[i])
	{
		j = 0;
		while (s2[j] == src[i + j])
		{
			if (s2[j + 1] == '\0')
			{
				return ((char *)&src[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
