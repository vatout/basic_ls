/*
** funk.h for funk.h in /home/vatout_a/taff/USP/my_ls/listes 
** 
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
** 
** Started on  Wed Nov 25 16:19:37 2015 Vatoutine Artem
** Last update Thu Nov 26 16:23:06 2015 Vatoutine Artem
*/

#ifndef FUNK_H_
# define FUNK_H_

typedef	struct		s_funk
{
  char			*name;
  struct s_funk		*next;
  struct s_funk		*prev;
}			t_funk;

typedef struct		s_list
{
  size_t		length;
  struct s_funk		*first;
  struct s_funk		*last;
}			t_list;

#endif /* FUNK_H_ */
