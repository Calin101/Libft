/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lenword.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: calin <calin@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 15:14:37 by calin        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/18 18:58:13 by calin       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_lenword(const char *str, int c)
{
	int i;
	int len;

	len = 0;
	i = 0;
	if (!str)
		return (0);
	while (str[i] == c)
		i++;
	while (str[i] != c)
	{
		if (str[i] == '\0')
			return (len);
		len++;
		i++;
	}
	return (len);
}
