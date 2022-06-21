/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:48:03 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/16 18:48:03 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <unistd.h>
#include <string>

# define BLUE "\033[0;36m"
# define PINK "\033[0;35m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define RED "\033[0;31m"
# define RESET "\033[0m"

class Fixed
{
private:
    int fixe; //pour stocker la valeur du nombre en virgule fixe
    const static int constStatic; // pour stocker le nombre de bits de la partie fractionnaire, et dont la valeur sera toujours le littéral entier 8
public:
    Fixed( void );
	Fixed( int const n );
	Fixed( Fixed const & src ); // Un constructeur de recopie.
    ~Fixed( void ); // ◦ Un destructeur.

	Fixed & operator=( Fixed const & rhs ); // ◦ Une surcharge de l’opérateur d’affectation.
	int getFixe( void );
	int getRawBits( void ) const ;// ◦ Une fonction membre int getRawBits( void ) const;
    // qui retourne la valeur du nombre à virgule fixe sans la convertir.
    
	void setRaWBits( int const raw );// ◦ Une fonction membre void setRawBits( int const raw );
    // qui initialise la valeur du nombre à virgule fixe avec celle passée en paramètre.
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );
#endif