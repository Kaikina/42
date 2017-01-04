/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <tgirou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 11:17:55 by tgirou            #+#    #+#             */
/*   Updated: 2017/01/04 12:18:17 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

char 	*int_conv(int nb)
{
	return (ft_itoa(nb));
}

int	ft_printf(const char *str, ...)
{
	va_list ap;
	int i;
	int count;
	int nb;
	char *ret;

	i = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar(str[i]);
			count++;
		}
		else
		{
			i++;
			if (str[i] == 'i' || str[i] == 'd')
			{
				nb = va_arg(ap, int);
				ret = int_conv(nb);
				count += ft_strlen(ret);
				while (*ret)
					ft_putchar(*ret++);
			}
		}
		i++;
	}
	va_end(ap);
	return (i);
}

int main()
{
	int ret;
	int rret;

	ret = printf("bonjour %d %d\n", 42, 21);
	rret = ft_printf("bonjour %d %d\n", 42, 21);
	printf ("%d | %d\n", ret, rret);
	return (0);
}