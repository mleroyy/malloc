/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:45:05 by mleroy            #+#    #+#             */
/*   Updated: 2018/01/13 19:06:03 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft/libft.h"
#include "../includes/libft_malloc.h"

int		main(void)
{
	char	*ptr;

	printf("getpagesize: %d\n", getpagesize());
	printf("--- Malloc ---\n");
	printf("[MALLOC]returns: %p\n", malloc(12));
	
	ptr = (char *)malloc(12);
	return (0);
}
