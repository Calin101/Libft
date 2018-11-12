/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstlen.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: calin <calin@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/21 11:28:48 by calin        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 14:55:55 by calin       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstlen(t_list *lst)
{
	size_t	len;
	t_list	*lstemp;

	if (!lst)
		return (0);
	len = 1;
	lstemp = lst;
	while (lstemp->next)
	{
		lstemp = lstemp->next;
		len++;
	}
	return (len);
}
