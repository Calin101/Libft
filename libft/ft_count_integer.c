/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_count_integer.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: calin <calin@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/17 17:38:37 by calin        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/18 18:56:09 by calin       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_integer(int nb)
{
	size_t	counter;

	counter = 0;
	while (nb)
	{
		nb /= 10;
		counter++;
	}
	return (counter);
}
