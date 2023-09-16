/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalmheir <kalmheir@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:15:42 by kalmheir          #+#    #+#             */
/*   Updated: 2023/09/16 20:06:18 by kalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>

class Awesome
{
    private:
        int _n;
    public:
        Awesome(void) : _n(0) {}
        Awesome(int n): _n(n) {}
        Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
        bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
        bool operator!=( Awesome const & rhs ) const { return (this->_n != rhs._n); }
        bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
        bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
        bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
        bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
        int get_n() const { return _n; }
};

std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

int main(void) {
    int *arr = new int[5];
    arr = (int[5]){1, 2, 3, 4, 5};
    std::string *arr2 = new std::string[5];
    arr2 = (std::string[5]){"1", "2", "3", "4", "5"};
    Awesome *arr3 = new Awesome[5];
    arr3 = (Awesome[5]){1, 2, 3, 4, 5};

    iter(arr, 5, print);
    iter(arr2, 5, print);
    iter(arr3, 5, print);
    
    return (0);
}