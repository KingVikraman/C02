/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:38:38 by rvikrama          #+#    #+#             */
/*   Updated: 2024/05/08 15:16:44 by rvikrama         ###   ########.fr       */
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
			str[r] += 32;
		r++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		r;
	int		r1;

	r = 0;
	r1 = 1;
	ft_strlowcase(str);
	while (str[r] != '\0')
	{
		if (str[r] >= 'a' && str[r] <= 'z')
		{
			if (r1 == 1)
				str[r] -= 32;
			r1 = 0;
		}
		else if (str[r] >= '0' && str[r] <= '9')
			r1 = 0;
		else
			r1 = 1;
		r++;
	}
	return (str);
}
/*
int main()
{
	char str[] = "coding is fun but better at 42";
	char str1[] = "coding is fun but better at 42";
	printf("%s", ft_strcapitalize(str));
	printf("\n%s", ft_strcapitalize(str1));
}
*/
