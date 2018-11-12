/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: calin <calin@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 16:17:02 by calin        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/18 19:02:06 by calin       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str)
{
	char	*dest;
	int		start;
	int		len;
	int		end;

	start = 0;
	if (str == NULL)
		return (NULL);
	while (str[start] == ' ' || str[start] == '\n' || str[start] == '\t')
		start++;
	end = ft_strlen(str) - 1;
	if (str[start] == '\0')
		return (ft_strdup(str + start));
	while (str[end] == ' ' || str[end] == '\n' || str[end] == '\t')
		end--;
	len = end - start;
	if ((dest = (char *)malloc(sizeof(*dest) * (len + 1))) == NULL)
		return (NULL);
	dest = ft_strsub(str, start, len + 1);
	return (dest);
}
