/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 20:36:34 by youngjle          #+#    #+#             */
/*   Updated: 2020/10/29 19:59:09 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char src[100] = "Hello, world!";
	char dest[100] = "";
	
	printf("before : %s\n", dest);
	printf("after : %s\n", ft_strcpy(dest, src));

	int i = 0;
	while(dest[i] != '\0')
	{
		printf("dest[%d] : %c\n", i, dest[i]);
		i++;
	}

	if(*dest != '\0')
		printf("null Yes\n");
	else
		printf("null No\n");
}
