#ifndef FT_TOUPPER_H
# define FT_TOUPPER_H

int     ft_toupper(int);
int     ft_isprint(int);
int     ft_isascii(int);
int     ft_isalnum(int);
int     ft_isdigit(int);
int     ft_isalpha(int);
int     ft_atoi(const char*);
int     ft_strncmp(const char*, const char*, size_t);
void    *ft_memset(void*, int, size_t);
void    ft_bzero(void*, size_t);
void    *ft_memcpy(void*, const void*, size_t);
void    *ft_memccpy(void*, const void*, int, size_t);
void    *ft_memmove(void *, const void *, size_t);

#endif // FT_TOUPPER_H
