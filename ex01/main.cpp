/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:13:00 by merlich           #+#    #+#             */
/*   Updated: 2022/08/13 22:28:54 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"
#include "Dog.class.hpp"

int	main(void)
{
	Animal	*arr[10];

	for (int i = 0; i < 5; i++)
		arr[i] = new Dog();
	for (int j = 5; j < 10; j++)
		arr[j] = new Cat();
	
	for (int k = 0; k < 10; k++)
		delete arr[k];
	
	return 0;
}

// int	main(void)
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	delete j;  // should not create a leak
// 	delete i;

// 	return 0;
// }

// int	main(void)
// {
// 	const Cat	cat;

// 	for (int i = 0; i < 100; i++)
// 	{
// 		cat.getBrain()->addIdeas("1");
// 	}
// 	for (int i = 0; i < 10; i++)
// 	{
// 		cat.getBrain()->addIdeas("new");
// 	}
// 	cat.getBrain()->setIdeas( "super" , 12);
// 	for (int i = 0; i < 110; i++)
// 	{
// 		std::cout << cat.getBrain()->getIdeas(i) << std::endl;
// 	}

// 	const Cat	kitten(cat);
// 	// Cat	kitten;
	
// 	// kitten = cat;
// 	for (int i = 0; i < 100; i++)
// 	{
// 		std::cout << kitten.getBrain()->getIdeas(i) << std::endl;
// 	}

// 	return 0;
// }

// int	main(void)
// {
// 	const Dog	dog;

// 	for (int i = 0; i < 100; i++)
// 	{
// 		dog.getBrain()->addIdeas("1");
// 	}
// 	for (int i = 0; i < 10; i++)
// 	{
// 		dog.getBrain()->addIdeas("new");
// 	}
// 	dog.getBrain()->setIdeas( "super" , 12);
// 	for (int i = 0; i < 100; i++)
// 	{
// 		std::cout << dog.getBrain()->getIdeas(i) << std::endl;
// 	}

// 	const Dog	puppy(dog);
// 	// Dog	puppy;
	
// 	// puppy = dog;
// 	for (int i = 0; i < 100; i++)
// 	{
// 		std::cout << puppy.getBrain()->getIdeas(i) << std::endl;
// 	}

// 	return 0;
// }
