/*
** main.c for main.c in /home/vatout_a/taff/USP/my_ls
** 
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
** 
** Started on  Mon Nov 23 13:10:29 2015 Vatoutine Artem
** Last update Sat Nov 28 14:44:14 2015 Vatoutine Artem
*/

#include "./include/declaration.h"

int	my_cpytab(struct dirent *entry, DIR *dirp, char **ls)
{
  int	a;

  a = 0;
  while ((entry = readdir(dirp)) != NULL)
    {
      ls[a] = entry->d_name;
      my_putchar('a');
      a++;
    }
  return (a);
}

t_list	*my_ls(const char *src, t_list *list)
{
  DIR		*dirp;
  struct dirent	*entry;
  struct stat	*buf;

  dirp = opendir(src);
  buf = malloc(sizeof(struct stat *));
  stat(src, buf);
  entry = readdir(dirp);
  list = my_init_list(list);
  my_put_inlist(list, entry, dirp);
  my_print_list(list);
  closedir(dirp);
  my_free_list(list);
  return (list);
}

int	my_parse2(char **av, t_list *list, int ac)
{
  if (av[1][0] == '-')
    {
      if (av[1][1] == 'a')
	my_print_la(list);
    }
}

int	my_parse(char **av, int ac)
{
  t_list	*list;

  if (ac == 1)
    {
      list = my_ls("./", list);
      my_print_list(list);
    }
  if (ac > 1)
    {
      if (av[1][0] == '.')
	{
	  my_ls(av[1], list);
	  my_print_list(list);
	}
      my_parse2(char **av, t_list *list, int ac);
    }
  else
    return (1);
  return (0);
 }

int	main(int ac, char **av)
{
  my_parse(av, ac);
  return (0);
}
