/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   rules_a.c										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mehakcan <mehakcan@student.42.com.tr>	  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/05/18 11:40:45 by mehakcan		  #+#	#+#			 */
/*   Updated: 2024/05/18 16:08:06 by mehakcan		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	sa(t_stack *stack, int print)
{
	int	tmp;

	if (stack->size_a > 1)
	{
		tmp = stack->a[0];
		stack->a[0] = stack->a[1];
		stack->a[1] = tmp;
		if (!print)
			write(1, "sa\n", 3);
	}
}

void	rra(t_stack *stack, int print)
{
	int	tmp;
	int	i;

	if (stack->size_a > 1)
	{
		tmp = stack->a[stack->size_a - 1];
		i = stack->size_a;
		while (--i > 0)
			stack->a[i] = stack->a[i - 1];
		stack->a[i] = tmp;
		if (!print)
			write(1, "rra\n", 4);
	}
}

void	ra(t_stack *stack, int print)
{
	int	tmp;
	int	i;

	if (stack->size_a > 1)
	{
		tmp = stack->a[0];
		i = -1;
		while (++i < stack->size_a - 1)
			stack->a[i] = stack->a[i + 1];
		stack->a[i] = tmp;
		if (!print)
			write(1, "ra\n", 3);
	}
}

void	pa(t_stack *stack)
{
	int	i;

	if (stack->size_b > 0)
	{
		i = stack->size_a;
		while (i > 0)
		{
			stack->a[i] = stack->a[i - 1];
			i--;
		}
		stack->a[0] = stack->b[0];
		i = 0;
		while (i < stack->size_b - 1)
		{
			stack->b[i] = stack->b[i + 1];
			i++;
		}
		stack->size_a++;
		stack->size_b--;
		write(1, "pa\n", 3);
	}
}
