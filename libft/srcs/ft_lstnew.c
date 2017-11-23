#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *list;
	list = malloc(sizeof(t_list));
	char const *str;
	str = (char const *)content;
	list->content = str;
	list->content_size = content_size;
	list->next = NULL;
	if (content == NULL)
	{
		list->content = NULL;
		list->content_size = 0;
		list->next = NULL;
	}
	return (list);
}
