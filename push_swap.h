/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   push_swap.h										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mehakcan <mehakcan@student.42.com.tr>	  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/05/17 15:34:18 by mehakcan		  #+#	#+#			 */
/*   Updated: 2024/05/18 15:57:11 by mehakcan		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
	char	**tmp;
	int		*a;
	int		*b;
	char	*num;
	int		size_a;
	int		size_b;
	int		flag;
}	t_stack;

int		ft_prtsize(char **ptr);
int		ft_ps_atoi(char *str, t_stack *stack);
int		ft_checked_sorted(int *stack, int size);
void	ft_free(char **str);
void	repeated_num(t_stack *stack);
void	index_stack(int *stack, int size, t_stack *s);
void	ft_error(char *str, t_stack *stack);

void	rra(t_stack *stack, int print);
void	pa(t_stack *stack);
void	pb(t_stack *stack);
void	ra(t_stack *stack, int print);
void	rb(t_stack *stack, int print);
void	sa(t_stack *stack, int print);

void	ft_sort(t_stack *stack, int size);
void	ft_sort_three(t_stack *s);
void	radix_sort(t_stack *stack);
void	selection_sort(t_stack *stack);
#endif