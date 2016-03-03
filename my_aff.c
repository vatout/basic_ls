/*
** my_aff.c for my_aff.c in /home/vatout_a/taff/USP/my_ls/listes_doubles
** 
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
** 
** Started on  Fri Nov 27 14:41:44 2015 Vatoutine Artem
** Last update Sat Nov 28 14:48:33 2015 Vatoutine Artem
*/

#include "include/declaration.h"
#include "include/my.h"

void	my_print_list(t_list *list)
{
  t_funk	*funk;

  funk = list->first;
  while (funk != NULL)
    {
      if (funk->name[0] != '.')
	my_printf("%s\n", funk->name);
      funk = funk->next;
    }
}

void	my_print_la(t_list *list)
{
  t_funk	*funk;

  funk = list->first;
  while (funk != NULL)
    {
      my_printf("%s\n", funk->name);
      funk = funk->next;
    }
}
