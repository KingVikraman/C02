/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:49:28 by rvikrama          #+#    #+#             */
/*   Updated: 2024/05/07 15:04:14 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, char *srs, unsigned int n)
{
	unsigned int	r;

	r = 0;
	while (r < n && srs[r] != '\0')
	{
		dest[r] = srs[r];
		r++;
	}
	while (r < n)
	{
		dest[r] = '\0';
		r++;
	}
	return (dest);
}
/*
int main()
{
	char srs[7] = "rajavik";
	int len = 7;
	char dest[len];

	ft_strncpy(dest, srs, len);
	for (int r = 0; r < len;r++)
	{
		printf("dest[%d]: %c\n", r, dest[r]);
	}
}
*/
