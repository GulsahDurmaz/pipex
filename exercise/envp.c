# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (i);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;
	char	*ptr;

	i = 0;
	ptr = (char *)big;
	little_len = ft_strlen(little);
	if (little_len == 0 || big == little)
		return (ptr);
	while (ptr[i] != '\0' && i < len)
	{
		j = 0;
		while (ptr[i + j] != '\0' && little[j] != '\0'
			&& ptr[i + j] == little[j] && i + j < len)
			j++;
		if (j == little_len)
			return (ptr + i);
		i++;
	}
	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	i;
	size_t	l_s;

	i = 0;
	l_s = ft_strlen(s);
	if (len == 0 || s[i] == '\0' || l_s < (size_t) start)
	{
		sub_s = malloc(1);
		if (!sub_s)
			return (0);
		sub_s[0] = '\0';
		return (sub_s);
	}
	if (len >= l_s || l_s < len + start)
		len = l_s - start;
	sub_s = (char *)malloc (sizeof(char) * (len + 1));
	if (!sub_s)
		return (0);
	while (i < len)
		sub_s[i++] = s[start++];
	sub_s[i] = '\0';
	return (sub_s);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	int		i;
	int		j;

	new_s = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 || !s2 || !new_s)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		new_s[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
		new_s[i++] = s2[j++];
	new_s[i] = '\0';
	return (new_s);
}

static size_t	ft_count_words(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (*str)
	{
		if (*str != c)
		{
			i++;
			while (*str && *str != c)
				str++;
		}
		else
			str++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	ret = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!ret)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				s++;
			ret[i++] = ft_substr(s - len, 0, len);
		}
		else
			s++;
	}
	ret[i] = 0;
	return (ret);
}

int main(int argc, char **argv, char **envp)
{
    char	**dir_paths;
	char	*path;
    char	*path_except_cmd;
	int		i;
    int     m;
    int     k;
    // int     j;

	i = 0;
	while (ft_strnstr(envp[i], "PATH", 4) == 0)
		i++;
    // printf("%d envp: %s \n", i, envp[i]);

	dir_paths = ft_split(envp[i] + 5, ':');
    k = 0;

    // while (dir_paths[k] != 0)
    // {
    //     printf("split %d: %s \n", k, dir_paths[k]);
    //     k++;
    // }
    m = 0;
	while (dir_paths[m])
	{
		path_except_cmd = ft_strjoin(dir_paths[m], "/");
        // printf("path_except_cmd: %s\n", path_except_cmd);
		path = ft_strjoin(path_except_cmd, argv[1]);
        printf("path: %s \n", path);
		free(path_except_cmd);
        if (access(path, X_OK) == 0)
			printf("path: %s \n", path);
		free(path);
		m++;
	}
    


    // j = 0;
    // while ( envp[j] != 0)
	// {
	// 	printf("envp %d: %s \n", j, envp[j]);
	// 	j++;
	// }
    // return (0);
}