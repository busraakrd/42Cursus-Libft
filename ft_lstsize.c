/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaraden <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 11:22:38 by bkaraden          #+#    #+#             */
/*   Updated: 2022/01/15 11:41:12 by bkaraden         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*r;

	i = 0;
	r = lst;
	while (r != NULL)
	{
		i++;
		r = r -> next;
	}
	return (i);
}