#include <stdio.h>
#include <string.h>
#include <unistd.h>

void ft_bzero(void *s, size_t n);

int	main(void)
{
	char	tab[20];

	strcpy(tab, "abcdefghijklmnopqrs");
	write(1, tab, 20);
	ft_bzero(tab + 10, 10);
	write(1, tab, 20);
	ft_bzero(tab + 2, 1);
	write(1, tab, 20);

	return 0;
}
