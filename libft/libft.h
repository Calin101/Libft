/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: calin <calin@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 15:01:03 by calin        #+#   ##    ##    #+#       */
/*   Updated: 2018/11/09 18:00:34 by calin       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include "get_next_line.h"

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *str, int c, size_t len);
void				*ft_memrcpy(void *dest, const void *src, size_t len);
void				*ft_memcpy(void *dest, const void *src, size_t len);
void				*ft_memccpy(void *dest, const void *src, int c, size_t len);
void				*ft_memmove(void *dest, const void *src, size_t len);
void				*ft_memchr(const void *str, int c, size_t len);
void				*ft_memalloc(size_t len);
void				ft_bzero(void *str, size_t len);
void				ft_putendl(char const *str);
void				ft_putstr(char const *str);
void				ft_putstr_fd(char const *str, int fd);
void				ft_putendl_fd(char const *str, int fd);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_strclr(char *str);
void				ft_putnbr(int nb);
void				ft_putnbr_fd(int nb, int fd);
void				ft_memdel(void **ap);
void				ft_strdel(char **str);
void				ft_striter(char *str, void (*f)(char *));
void				ft_striteri(char *str, void (*f)(unsigned int, char *));
void				ft_swap(int *a, int *b);

int					ft_memcmp(const void *s1, const void *s2, size_t len);
int					ft_atoi(const char *str);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t len);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t len);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_countwords(const char *str, int c);
int					ft_lenword(const char *str, int c);
int					ft_count_integer(int nb);

char				**ft_strsplit(char const *str, char c);
char				*ft_strnew(size_t len);
char				*ft_strchr(const char *src, int c);
char				*ft_strrchr(const char *src, int c);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strdup(const char *str);
char				*ft_strncpy(char *dest, const char *src, size_t len);
char				*ft_strstr(const char *src, const char *s2);
char				*ft_strnstr(const char *src, const char *s2, size_t len);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t len);
char				*ft_strmap(char const *str, char (*f)(char));
char				*ft_strmapi(char const *str, char (*f)(unsigned int, char));
char				*ft_strsub(char const *str, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *str);
char				*ft_itoa(int nb);

size_t				ft_index(const char *str, int c);
size_t				ft_strlen(const char *str);
size_t				ft_strlcat(char *dest, const char *src, size_t len);
size_t				ft_lstlen(t_list *lst);
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
#endif
