void    child(char **av, int *p_fd, **env);
{
    int fd;

    fd = open_file(av[1], 0);
    dup2(fd, 0);
    dup2(p_fd[1], 1);
    close(p_fd[0]);
    exec(av[2], env);
}

void    parent(char **av, int *p_fd, **env);
{
    int fd;

    fd = open_file(av[4], 1);
    dup2(fd, 1);
    dup2(p_fd[0], 0);
    close(p_fd[1]);
    exec(av[3], env);
}

int     main(int ac, char **av, char **env)
{
    int     p_fd[2];
    pid_t   pid;

    if (ac != 5)
        exit_format(1);
    if (pipe(p_fd) == -1)
        exit(-1);
    pid = fork();
    if (pid == -1)
        exit(-1);
    if (!pid)
        child(av, p_fd, env);
    parent(av, p_fd, env);
}