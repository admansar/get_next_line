#include "get_next_line.h"
#include "stdlib.h"
int main(int ac, char **av)
{
	int i = 0;
	if (ac > 1)
	{
	int	fd;
	int	how_mutch_to_write = atoi(av[1]);
	if (how_mutch_to_write <= 0 )
	{	
		printf("\n wa strict ra9m positive \n\n");
	}
	else
	{
	fd = open("my_text.txt", O_RDONLY);
	while ( i < how_mutch_to_write)
	{
		printf("%s", get_next_line(fd));
		i++;
	}
	}
	}
	else 
		printf("\nwa kteb xi ra9m strict positive mn mor ./a.out\n\n");
		return (0);
}

