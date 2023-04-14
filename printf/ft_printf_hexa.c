/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:04:59 by ricda-si          #+#    #+#             */
/*   Updated: 2022/12/19 14:55:45 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	ft_hex_len(unsigned int numero)
{
	int	len;

	len = 0;
	while (numero != 0)
	{
		len++;
		numero = numero / 16;
	}
	return (len);
}

void	ft_put_hex(unsigned int numero, const char variavel)
{
	if (numero >= 16)
	{
		ft_put_hex(numero / 16, variavel);
		ft_put_hex(numero % 16, variavel);
	}
	else
	{
		if (numero <= 9)
			ft_putchar_fd((numero + '0'), 1);
		else
		{
			if (variavel == 'x')
				ft_putchar_fd((numero - 10 + 'a'), 1);
			if (variavel == 'X')
				ft_putchar_fd((numero - 10 + 'A'), 1);
		}
	}
}

int	ft_print_hex(unsigned int numero, const char variavel)
{
	if (numero == 0)
		return (write(1, "0", 1));
	else
		ft_put_hex(numero, variavel);
	return (ft_hex_len(numero));
}
