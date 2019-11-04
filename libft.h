/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <badam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 01:42:08 by badam             #+#    #+#             */
/*   Updated: 2019/11/04 01:43:42 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int     ft_atoi(const char *str);
void    ft_bzero(void *s, size_t n);
void    *ft_calloc(size_t count, size_t size);
int     ft_isalnum(int ch);
int     ft_isalpha(int letter);
int     ft_isascii(int c);
int     ft_isdigit(int digit);
int     ft_isprint(int c);
char    *ft_itoa(int n);
                int c, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(void *s1, void *s2, size_t n);
void    *ft_memcpy(unsigned char *dst, const unsigned char *src, size_t n);
void    *ft_memmove(unsigned char *dst, const unsigned char *src, size_t len);
void    *ft_memset(void *b, unsigned char c, unsigned long len);
void    ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_putstr_fd(char *s, int fd);
char    **ft_split(char const *s, char c);
char    *ft_strchr(const char *s, int c);
char    *ft_strdup(const char *s1);
char    *ft_strjoin(char const *s1, char const *s2);
                size_t dstsize);
                size_t dstsize);
size_t  ft_strlen(const char *str);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
char    *ft_strrchr(const char *s, int c);
char    *ft_strtrim(char const *s1, char const *set);
char    *ft_substr(char const *s, unsigned int start, size_t len);
int     ft_tolower(int c);
int     ft_toupper(int c);

#endif