/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrunial <ibrunial@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:42:07 by ibrunial          #+#    #+#             */
/*   Updated: 2024/11/12 10:53:15 by ibrunial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		start;
	int		end;
	int		tem;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		tem = tab[start];
		tab[start++] = tab[end];
		tab[end--] = tem;
	}
}
/*
int main(){
	int arr[3] = {0,1,2};
	ft_rev_int_tab(arr, 3);
	for (int i = 0; i < 3; i++)
		printf("%d\n", arr[i]);
}
*/