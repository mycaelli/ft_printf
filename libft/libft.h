/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 20:15:58 by mcerquei          #+#    #+#             */
/*   Updated: 2022/06/06 06:10:18 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_tolower(int c);

int		ft_toupper(int c);

void	*ft_memset(void *block, int c, size_t size);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memchr(const void *block, int c, size_t size);

int		ft_memcmp(const void *a1, const void *a2, size_t size);

size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

char	*ft_strchr(const char *s, int c);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

char	*ft_strrchr(const char *string, int c);

int		ft_strncmp(const char *a1, const char *a2, size_t size);

char	*ft_strnstr(const char *big, const char *little, size_t len);

void	ft_bzero(void *s, size_t n);

int		ft_atoi(const char *str);

void	*ft_calloc(size_t nmemb, size_t size);

char	*ft_strdup(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_itoa(int n);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

char	**ft_split(char const *s, char c);

void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_lstadd_front(t_list **lst, t_list *new);

void	ft_lstclear(t_list **lst, void (*del)(void *));

void	ft_lstdelone(t_list *lst, void (*del)(void *));

void	ft_lstiter(t_list *lst, void (*f)(void *));

t_list	*ft_lstlast(t_list *lst);

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

t_list	*ft_lstnew(void *content);

int		ft_lstsize(t_list *lst);

char	*ft_itoa_ui(unsigned int n);

char	*ft_itoa_hex(unsigned int n);

char	*ft_itoa_ptr(unsigned long int n);

int		ft_isuppercase(char c);

int		ft_islowercase(char c);

#endif
