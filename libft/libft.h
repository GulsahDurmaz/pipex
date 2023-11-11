/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <gdurmaz@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 19:00:51 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/08/24 14:27:59 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

# define NULL_DISPLAY "(null)"
# define DEC_BASE "0123456789"
# define HEX_BASE_LOW "0123456789abcdef"
# define HEX_BASE_UP "0123456789ABCDEF"
# define POINTER_PREFIX "0x"
# define NIL_DISPLAY "(nil)"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_bzero(void *s, size_t n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);

void				*ft_memset(void *b, int c, size_t len);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_calloc(size_t nmemb, size_t size);

int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_isspace(int c);
int					ft_issign(char c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);

size_t				ft_strlen(const char *s);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);

char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);
char				*ft_strdup(const char *s1);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char				**ft_split(char const *s, char c);

t_list				*ft_lstnew(void *content);
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void*));
void				ft_lstclear(t_list **lst, void (*del)(void*));
void				ft_lstiter(t_list *lst, void (*f)(void *));

int					ft_lstsize(t_list *lst);

long				ft_atol(const char *str);

int					ft_printf(const char *s, ...);
size_t				put_count_char(int s);
size_t				put_count_str(char *s);
size_t				put_count_nbr_base(int nbr, char *base);
size_t				put_count_unbr_base(unsigned int nbr, char *base);
size_t				put_count_ptr(void *ptr, char *base, int flag);

#endif
