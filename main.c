//#include "get_next_line_bonus.h"
//#include "get_next_line.h"

/*int	main(void)
{
	char	*line;
	int		i;
	int		fd1;

	fd1 = open("txt.txt", O_RDONLY);
	i = 0;
	while (i < 15)
	{
		line = get_next_line(fd1);
		printf("fd [%d] / line [%d]: %s|\n", fd1, i, line);
		free(line);
		i++;
	}
	close(fd1);
	return (0);
}*/

/*
int	main(void)
{
	char	*line;
	int		i;
	int		fd1;
	int		fd2;
	int		fd3;
	fd1 = open("tests/test.txt", O_RDONLY);
	fd2 = open("tests/test2.txt", O_RDONLY);
	fd3 = open("tests/test3.txt", O_RDONLY);
	i = 1;
	while (i < 7)
	{
		line = get_next_line(fd1);
		printf("fd [%d] / line [%d]: %s\n", fd1, i, line);
		free(line);
		line = get_next_line(fd2);
		printf("fd [%d] / line [%d]: %s\n", fd2, i, line);
		free(line);
		line = get_next_line(fd3);
		printf("fd [%d] / line [%d]: %s\n", fd3, i, line);
		free(line);
		i++;
	}
	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
} */
