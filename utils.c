/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   utils.c											:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mehakcan <mehakcan@student.42.com.tr>	  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/05/17 15:43:18 by mehakcan		  #+#	#+#			 */
/*   Updated: 2024/05/18 11:00:59 by mehakcan		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	ft_prtsize(char **ptr)
{
	int	i;

	i = -1;
	while (ptr[++i])
		;
	return (i);
}

int	ft_ps_atoi(char *str, t_stack *stack)
{
	int		sign;
	long	res;

	res = 0;
	sign = 1;
	while (*str == ' ' || (*str <= 13 && *str >= 9))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	if (*str == '\0')
		ft_error("Error\n", stack);
	while (*str)
	{
		if (ft_isdigit(*str) == 0)
			ft_error("Error\n", stack);
		res = (res * 10) + (*str - '0');
		str++;
		if ((res * sign < -2147483648 || res * sign > 2147483647))
			ft_error("Error\n", stack);
	}
	return (res * sign);
}

void	repeated_num(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->size_a)
	{
		j = 0;
		while (j < stack->size_a)
		{
			if (stack->a[i] == stack->a[j] && i != j)
				ft_error("Error\n", stack);
			j++;
		}
		i++;
	}
}

int	ft_checked_sorted(int *stack, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (stack[i] > stack[i + 1])
			return (0);
		i++;
	}
	return (1);
}
