/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 16:43:12 by mleroy            #+#    #+#             */
/*   Updated: 2018/01/13 16:54:07 by mleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include

int		main(void)
{
	malloc(1024);
	malloc(1024 * 32);
	malloc(1024 * 1024);
	malloc(1024 * 1024 * 16);
	malloc(1024 * 1024 * 16 * 128);
	show_alloc_mem();
	return (0);
}