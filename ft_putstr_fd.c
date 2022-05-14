/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaraden <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 14:43:39 by bkaraden          #+#    #+#             */
/*   Updated: 2022/01/22 14:11:17 by bkaraden         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	if (!s)
		return ;
	while (*s != '\0')
		ft_putchar_fd(*s++, fd);
}