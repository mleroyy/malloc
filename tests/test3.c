/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 16:15:18 by mleroy            #+#    #+#             */
/*   Updated: 2018/01/13 16:34:02 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include
#include

#define M (1024*1024)

void print(char *s)
{
	write(1, s, strlen(s));
}

int main(void)
{
	char	*addr1;
	char	*addr2;
	char	*addr3;

	addr1 = (char *)malloc(16 * M);
	strcpy(addr1, "Bonjour\n");
	print(addr1);
	//addr2 = (char *)malloc(16*M);
	addr3 = (char *)realloc(addr1, 128 * M);
	addr3[127*M] = 42;
	print(addr3);
	return (0);
}
