/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 15:58:35 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/05/14 15:58:38 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*	
	This function allocates memory for a new element of type t_list, 
	setting its content to be the content parameter, and setting the next 
	variable to NULL.
	Then it returns the newly allocated / created element of the list.

	*declare a new list element
	*allocate memory for it
	*set the new element variables 
	*new->content = content
	*new->next = NULL
	*return the new element 

	*Array’ler static yapıdayken, Bağlı listeler dynamic yapıdadır. 
	*Arraylere yeni bir veri eklerken zorluk çekebiliriz ama bağlı liste 
	kullanırsak istediğimiz yere istediğimiz veriyi ekleyebiliriz. 
	*Bağlı listelerde eleman sayısı kesin değildir, istediğimiz şekilde bağlı 
	listeye eleman ekleyebilir veya çıkartabiliriz. 
	*Bağlı listede elemanın bulunduğu yere node(düğüm) diyoruz.Eğer en son 
	Node’da isek onun next’i NULL’ı göstermelidir. 
	*Array yerine Bağlı liste kullanmanın dezavantajları da olabilir, 
	bunlardan biri Arrayler istediğimiz nesneye erişmek için sadece o 
	elemanın nerede olduğunu işaret(point) etmemiz lazım ama bağlı listelerde
	o elemana ulaşmak için en baş noktandan başlayarak taramamız lazım.
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*new_element;

	new_element = (t_list *)malloc(sizeof(t_list));
	if (!new_element)
		return (NULL);
	new_element -> content = content;
	new_element -> next = NULL;
	return (new_element);
}
