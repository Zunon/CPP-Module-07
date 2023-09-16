/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalmheir <kalmheir@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:09:28 by kalmheir          #+#    #+#             */
/*   Updated: 2023/09/16 20:18:30 by kalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T>
class Array {
	private:
		T				*_arr;
		unsigned int	_size;
	public:
		Array (void) : _arr(new T[0]), _size(0) {}
		
		Array (unsigned int n) : _arr(new T[n]), _size(n) {
			for (unsigned int i = 0; i < _size; i++)
				_arr[i] = T();
		}

		Array (const Array& src) : _arr(new T[src._size]), _size(src._size) {
			for (unsigned int i = 0; i < _size; i++)
				_arr[i] = src._arr[i];
		}

		~Array (void) { delete[] _arr; }

		Array	&operator=(const Array &src) {
			if (this != &src) {
				delete [] _arr;
				_arr = new T[src._size];
				_size = src._size;
				for (unsigned int i = 0; i < _size; i++)
					_arr[i] = src._arr[i];
			}
			return (*this);
		}

		T	&operator[](unsigned int i) {
			if (i >= _size)
				throw std::exception();
			return _arr[i];
		}

		unsigned int	size(void) const { return _size; }
};

#endif