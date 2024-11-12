/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrunial <ibrunial@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:53:56 by ibrunial          #+#    #+#             */
/*   Updated: 2024/11/12 11:06:02 by ibrunial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		tem;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				tem = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tem;
			}
			j++;
		}
		i++;
		j = 0;
	}
}

// int main(){
// 	int arr[5] = {3,6,2,8,-1};
// 	ft_sort_int_tab(arr, 5);
// 	for (int i = 0; i< 5; i++){
// 		printf("%d\n", arr[i]);
// 	}
// }