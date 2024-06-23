/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:25:05 by rvikrama          #+#    #+#             */
/*   Updated: 2024/05/07 15:46:56 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *srs)
{
	int	i;

	i = 0;
	while (srs[i] != '\0')
	{
		dest[i] = srs[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main ()

{
	char srs[] = "I love to code,yet i am strugling!";
	char dest[50];

	ft_strcpy( dest , srs);
	printf("srs>|~ %s\n ,dest>|~ %s", srs , dest);
}
*/
