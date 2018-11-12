/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: calin <calin@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/21 11:27:40 by calin        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 14:02:40 by calin       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lstdest;
	t_list	*beginlst;
	t_list	*lstemp;

	if (!lst || !f)
		return (NULL);
	lstemp = f(lst);
	if ((lstdest = ft_lstnew(lstemp->content, lstemp->content_size)) == NULL)
		return (NULL);
	beginlst = lstdest;
	lst = lst->next;
	while (lst)
	{
		lstemp = f(lst);
		if ((lstdest->next = ft_lstnew(lstemp->content,
		lstemp->content_size)) == NULL)
			return (NULL);
		lstdest = lstdest->next;
		lst = lst->next;
	}
	return (beginlst);
}
