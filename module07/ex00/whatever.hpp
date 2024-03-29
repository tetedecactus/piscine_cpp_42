/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:12:15 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/01 12:12:15 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

# define BLUE "\033[0;36m"
# define PINK "\033[0;35m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define RED "\033[0;31m"
# define RESET "\033[0m"


template < typename T >
T const & min( T const & x, T const & y) { return ((x <= y) ? x : y); }

template < typename T >
T const & max( T const & x, T const & y) { return ((x >= y) ? x : y); }

template < typename T >
void swap( T& x, T& y) { 
    T tmp = x;
    x = y;
    y = tmp; 
}