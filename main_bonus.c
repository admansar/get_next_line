#include "../get_next_line/get_next_line.h"

int main()
{
	int fd1 = open("my_text.txt" , O_RDONLY);
	int fd2 = open("my_text2.txt" , O_RDONLY);
	printf("%s", get_next_line_bonus(fd1));
	printf("%s", get_next_line_bonus(fd2));
	printf("%s", get_next_line_bonus(fd1));
	printf("%s", get_next_line_bonus(fd2));
	printf("%s", get_next_line_bonus(fd1));
	printf("%s", get_next_line_bonus(fd2));
	printf("%s", get_next_line_bonus(fd1));
	printf("%s", get_next_line_bonus(fd2));
	printf("%s", get_next_line_bonus(fd1));
	printf("%s", get_next_line_bonus(fd2));
	return (0);
}
