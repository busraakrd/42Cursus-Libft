/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaraden <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 14:46:38 by bkaraden          #+#    #+#             */
/*   Updated: 2022/01/22 13:59:32 by bkaraden         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	if (s)
		while (*s != '\0')
			ft_putchar_fd(*s++, fd);
	ft_putchar_fd('\n', fd);
}
