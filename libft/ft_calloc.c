/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 12:28:09 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/05/14 17:28:13 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}
//	#include <stdlib.h>
//	The  calloc()  function  allocates memory for an array of nmemb elements
//of size bytes each and returns a pointer to the allocated memory.  
//	The memory is set to zero. 
//	If nmemb or size is 0, then calloc() returns either NULL, or a unique 
//pointer value  that  can  later  be  successfully passed  to  free().  
//	If the multiplication of nmemb and size would result in integer overflow, 
//then calloc() returns an error.  
//	By contrast, an integer overflow would not be detected in the following 
//call to malloc(), with the result that an incorrectly sized block of 
//memory  would  be allocated:
//	malloc(nmemb * size);
//nmemb = eleman sayisi
//size = eleman boyutu
//	calloc, malloc ile ayni islemi yapar ek olarak ayrilan bellegi temizler. 
//Bunu da bellegin her byteina 0 ekleyerek yapar.
//	calloc'un malloctan farki ayrilacak bellek miktarinin eleman boyutu ve 
//eleman sayisi olarak iki arguman halinde tanimlanmis olmasidir.
//	Asagidaki fonksiyonlar aynidir.
//	ip = malloc (10 * sizeof(int));
//	ip = calloc (10, sieof(int));
//	int tipinde uzunlugu 100 olan bir dizi icin:
//	dizi = (int *)calloc(100, sizeof(int));
//	Fonksiyonun basindaki (int *) ifadesi donus degerini int tipinde 
//pointera ceviriyor. Bunu yapmamizin sebeni calloc fonksiyonunun donus 
//tipinin void tipinde pointer olmasidir. Bu degeri kendi kullandigimiz 
//veri tipine donusturmeliyiz.
//	Hata durumunda NULL dondurur.*/