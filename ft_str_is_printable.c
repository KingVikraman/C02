/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:10:41 by rvikrama          #+#    #+#             */
/*   Updated: 2024/05/07 15:40:24 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= ' ' && *str <= '~' ))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/* 
int main ()
{
		char str []= "Test Run";
		int result = ft_str_is_printable(str);
		printf("Answer: %d\n", result);
}
*/
