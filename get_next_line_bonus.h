#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdlib.h>
# include <fcntl.h>
# include <stddef.h>
# include <stdio.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(char *s);
char	*new_line(char *line);
char	*ft_get_line(int fd, char *line);
char	*ft_get_next_line(char	*line);

#endif
