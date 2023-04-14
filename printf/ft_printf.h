/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:52:06 by ricda-si          #+#    #+#             */
/*   Updated: 2023/02/28 15:45:19 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_print_ptr(unsigned long long ptr);
char	*ft_itoau(unsigned long long n);
int		ft_formatos(va_list args, const char variavel);
int		ft_printf(const char *str, ...);
int		ft_putchar(int c);
int		ft_printnbr(int n);
int		ft_putstr(char *str);
int		ft_printnbru(unsigned int n);
int		ft_print_hex(unsigned int numero, const char variavel);
void	ft_putchar_fd(char c, int fd);
int		ft_ptr_len(size_t num);
void	ft_put_ptr(size_t num);
int		ft_print_ptr(unsigned long long ptr);
int		ft_hex_len(unsigned int numero);
void	ft_put_hex(unsigned int numero, const char variavel);
int		ft_print_hex(unsigned int numero, const char variavel);
char	*ft_lenretu(unsigned long long n, char *str);

#endif
