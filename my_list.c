/*
** my_sort_alpha.c for my_sort_alpha.c in /home/vatout_a/taff/USP/my_ls
** 
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
** 
** Started on  Tue Nov 24 14:50:54 2015 Vatoutine Artem
** Last update Sat Nov 28 14:49:15 2015 Vatoutine Artem
*/

#include "include/declaration.h"

void	my_free_list(t_list *list)
{
  t_funk	*funk;
  t_funk	*next;

  funk = list->first;
  while (next != NULL)
    {
      next = funk->next;
      free(funk->name);
      free(funk);
      funk = next;
    }
}

t_list	*my_init_list(t_list *list)
{
  if ((list = malloc(sizeof (*list))) == NULL)
    return (1);
  list->length = 0;
  list->first = NULL;
  list->last = NULL;
  return (list);
}

t_list	*add_elem(t_list *list, char *src)
{
  t_funk        *funk;

  if ((funk = malloc(sizeof (*funk))) == NULL)
      return (NULL);
  funk->name = src;
  funk->next = NULL;
  if (list->last == NULL)
    {
      funk->prev = NULL;
      list->last = funk;
      list->first = funk;
    }
  else
    {
      list->last->next = funk;
      funk->prev = list->last;
      list->last = funk;
    }
  list->length++;
  return (list);
}

int	my_put_inlist(t_list *list, struct dirent *entry, DIR *dirp)
{
  int	z;

  z = 0;
  while ((entry = readdir(dirp)) != NULL)
    {
      add_elem(list, entry->d_name);
      z++;
    }
  return (z);
}
