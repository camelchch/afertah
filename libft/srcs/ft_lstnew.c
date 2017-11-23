#include "libft.h"
t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;
	char	*copy;

	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	copy = malloc(sizeof(char) * (strlen((char*)content)));
	list->content = copy;
	ft_memcpy(copy, content, content_size);
	list->content_size = content_size;
	list->next = NULL;
	if (content == NULL)
	{
		list->content = NULL;
		list->content_size = 0;
	}
	return (list);
}
