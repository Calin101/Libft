/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_countwords.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: calin <calin@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 14:15:40 by calin        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 18:17:47 by calin       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(const char *str, int c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (!str)
		return (0);
	if (str[0] && str[0] != c)
		count++;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}
