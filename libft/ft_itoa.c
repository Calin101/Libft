/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: calin <calin@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/17 11:38:15 by calin        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/18 18:58:09 by calin       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int nb)
{
	char	*tab;
	size_t	count;
	size_t	negative;

	negative = 0;
	count = ft_count_integer(nb);
	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	if (nb == 0)
		return (ft_strdup("0"));
	if (nb < 0)
	{
		count++;
		nb = nb * -1;
		negative = 1;
	}
	if ((tab = ft_strnew(count)) == NULL)
		return (NULL);
	while (count--)
	{
		tab[count] = (nb % 10) + 48;
		nb = nb / 10;
	}
	(negative) ? tab[0] = '-' : tab[0];
	return (tab);
}
