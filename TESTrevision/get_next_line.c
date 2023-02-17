static void     ft_doread(const int fd, char **line, char *buff, int x, int y)
{
    if (buff[y] != '\n')
    {
        read(fd, (void *)buff, BUFF_SIZE);
        line[x][y] = buff[y];
        y++;
    }
}

int             get_next_line(const int fd, char **line)
{
    int     x;
    int     y;
    char    *buff;

    buff = (char *)malloc(BUFF_SIZE);
    x = 0;
    y = 0;
    ft_doread(fd, line, buff, x, y);
    return (0);
}

int             main(void)
{
    char    *str;
    int     fd;
    int     lines;

    str = (char *)malloc(BUFF_SIZE);
    fd = open("./test.txt", O_RDONLY);
    get_next_line(fd, &str);
    printf("%s", str);
    return (0);
}