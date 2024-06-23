/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:39:02 by rvikrama          #+#    #+#             */
/*   Updated: 2024/05/08 17:03:48 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	r;

	r = 0;
	while (str[r] != '\0')
	{
		if (str[r] >= 'a' && str[r] <= 'z')
		{
			str[r] = str[r] - 32;
		}
		r++;
	}
	return (str);
}
/*
int main(void)
{
	char str[] = "rajavikraman 2908";
	ft_strupcase(str);

	printf("Answer: %s\n", str);
}
*/
