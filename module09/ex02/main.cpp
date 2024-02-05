/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:21:33 by olabrecq          #+#    #+#             */
/*   Updated: 2024/02/04 21:12:53 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char const *argv[])
{
    try
    {
        if (argc < 2 || argc > 3001)
            throw std::invalid_argument("Error: Invalid input, must be between 0 and 3000 digits.");
        PmergeMe p;
        p.set_input(p.parse_input(argv));
        
        p.set_vector(p.stock_vector_input(argv));
        p.set_deque(p.stock_deque_input(argv));
        std::vector<int> v_array = p.get_vector();
        std::deque<int> d_array = p.get_deque();
        
        p.print_unsorted_input();
        
        std::clock_t v_start = std::clock();
        p.merge_insert_sort(v_array, 'v');
        std::clock_t v_end = std::clock();
        
        std::clock_t d_start = std::clock();
        p.merge_insert_sort(d_array, 'd');
        std::clock_t d_end = std::clock();
        
        p.print_sorted_input();
        
        std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector " << (v_end - v_start) / (double) CLOCKS_PER_SEC << "s" << std::endl;
        std::cout << "Time to process a range of " << argc - 1 << " elements with std::deque " << (d_end - d_start) / (double) CLOCKS_PER_SEC << "s" << std::endl;
        

        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
