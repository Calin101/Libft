/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_index.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: calin <marvin@le-101.fr>                   +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/29 13:20:19 by calin        #+#   ##    ##    #+#       */
/*   Updated: 2018/11/01 18:35:43 by calin       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_index(const char *str, int c)
{
	size_t index;

	index = 0;
	while (str[index])
	{
		if (str[index] == c)
			return (index + 1);
		index++;
	}
	return (0);
}
