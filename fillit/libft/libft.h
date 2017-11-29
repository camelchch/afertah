#ifndef LIBFT_H

# define LIBFT_H
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"
typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_itoa(int n);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memcpy(void *s1, const void *s2, size_t n);
void	*ft_memalloc(size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2,size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	ft_memdel(void** p);
void	*ft_memmove(void *dest, const void* src, size_t n);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char *str);
void	ft_putstr_fd(char const *str, int fd);
void	ft_putendl(char const *s);
size_t	ft_strlen(const char *str);
void	ft_putendl_fd(char const *str, int fd);
char	*ft_strchr(const char *str, int c);
char	*ft_strcat(char *dest, const char *src);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putnbr(int n);
void	ft_strclr(char *s);
int		ft_strcmp(const char *s1,const char *s2);
char	*ft_strcpy(char *dest, const char *src);
void	ft_strdel(char **str);
char	*ft_strdup(char *src);
char	*ft_strnew(size_t len);
int		ft_strequ(char const *str1, char const *str2);
void	ft_striter(char *str,void (*f)(char *));
int		ft_tolower(int c);
void	ft_striteri(char *str,void (*f)(unsigned int, char *));
char	*ft_strtrim(char *str);
char	*ft_strsub(char const *str, unsigned int start, size_t len);
char	*ft_strstr(const char *str, const char *to_find);
char	**ft_strsplit(char* str, char c);
char	*ft_strrchr(const char* str, int c);
char	*ft_strnstr(const char *str, const char *to_find, size_t n);
int		ft_strnequ(char const *str1, char const *str2, size_t n);
char	*ft_strncpy(char *dst, const char* src, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncat(char *dest, const char *src, size_t nb);
char	*ft_strmapi(char const *str, char(*f)(unsigned int,char));
char	*ft_strmap(char const *str, char(*f)(char));
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strjoin(char const *str1, char const *str2);
int		ft_toupper(int c);
t_list	*ft_lstnew(void const *content, size_t content_size);
#endif
