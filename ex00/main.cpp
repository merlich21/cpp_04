/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:13:00 by merlich           #+#    #+#             */
/*   Updated: 2022/08/13 22:43:50 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"
#include "WrongCat.class.hpp"
#include "Dog.class.hpp"

// int	main(void)
// {
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	// const Cat 		kitty = Cat();
// 	// const Cat 		kitty2 = Cat(kitty);

// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();


// 	delete meta;
// 	delete j;
// 	delete i;

// 	return 0;	
// }

int	main(void)
{
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();

	std::cout << i->getType() << " " << std::endl;
	i->makeSound();  //will output the cat sound!
	meta->makeSound();

	delete meta;
	delete i;

	return 0;	
}
