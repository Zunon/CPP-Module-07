/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalmheir <kalmheir@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:37:42 by kalmheir          #+#    #+#             */
/*   Updated: 2023/09/16 20:05:49 by kalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T *arr, int len, void (*f)(const T &)) {
    for (int i = 0; i < len; i++)
        f(arr[i]);
}

// This template is only here to test the iter function
template <typename T>
void	print(T a) {
    std::cout << a << std::endl;
}

#endif