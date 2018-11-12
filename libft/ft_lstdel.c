/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdel.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: calin <calin@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/18 15:25:51 by calin        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/18 18:58:25 by calin       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *start;

	start = *alst;
	if (start->next)
		ft_lstdel(&start->next, del);
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
