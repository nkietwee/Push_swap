
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

typedef struct s_list
{
	int		number;
	int 	index;
	struct s_list	*next;
}t_list;

void ft_addindex(t_list *stack)
{
	t_list *tmp;
	int	i;

	tmp = stack;
	i = 1;
	while (tmp)
	{
		tmp->index = i;
		tmp = tmp->next;
		i++;
	}
}

void	ft_ascending(t_list *stack)
{
	t_list *tmp1;
	t_list *tmp2;
	int temporary;
	int	i;

	tmp1 = stack;
	tmp2 = stack->next;
	i = 1;
	while (tmp1 && tmp2)
	{
		if (tmp1->number > tmp2->number)
		{
			temporary = tmp1->number;
			tmp1->number = tmp2->number;
			tmp2->number = temporary;

			tmp1 = stack;
			tmp2 = tmp1->next;

			// tmp1->index = i;
			// i++;
		}
		else
		{
			tmp1 = tmp1->next;
			tmp2 = tmp1->next;
			// i++;
		}
	}
}

int	main()
{
	int	number1 = 10;
	int	number2 = 6;
	int	number3 = 24;
	int	number4 = 5;
	int	number5 = 47;

	t_list *a;
	t_list *b;
	t_list *c;
	t_list *d;
	t_list *e;

	a = malloc(sizeof(t_list));
	b = malloc(sizeof(t_list));
	c = malloc(sizeof(t_list));
	d = malloc(sizeof(t_list));
	e = malloc(sizeof(t_list));

	a->number =  number1;
	a->next = b;

	b->number =  number2;
	b->next = c;

	c->number =  number3;
	c->next = d;

	d->number =  number4;
	d->next = e;

	e->number =  number5;
	e->next = NULL;

	ft_ascending(a);
	ft_addindex(a);
	while (a)
	{
		printf(" value bf : %d\n" , a->number);
		printf(" 				indexbf : %d\n" , a->index);
		a = a->next;
	}
}
