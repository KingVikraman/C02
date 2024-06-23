/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:44:33 by rvikrama          #+#    #+#             */
/*   Updated: 2024/05/08 15:13:16 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	r;

	r = 0;
	while (str[r] != '\0')
	{
		if (str[r] >= 'A' && str[r] <= 'Z')
		{
			str[r] = str[r] + 32;
		}
		r++;
	}
	return (str);
}
/*
int main ()
{
	char str[]="RAJA VIKRAMAN 2908";
	ft_strlowcase (str);

	printf ("Answer : %s\n" ,str );
	return (0);
}
*/
