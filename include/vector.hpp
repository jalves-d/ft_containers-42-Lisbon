#ifndef VECTOR_HPP
#define VECTOR_HPP

# include <iterator>

namespace ft
{
	template < class T, class Alloc = std::allocator<T> >
	class vector
	{
		typedef T	value_type;
		typedef Alloc	allocator_type;

		typedef typename allocator_type::reference reference;
		typedef typename allocator_type::const_reference const_reference;
		typedef typename allocator_type::pointer pointer;
		typedef typename allocator_type::const_pointer const_pointer;

		typedef ft::iterator< T >										iterator;
		typedef ft::iterator< const T >									const_iterator;
		typedef ft::reverse_iterator<iterator>							reverse_iterator;
		typedef ft::reverse_iterator<const_iterator>					const_reverse_iterator;
		typedef typename iterator_traits<iterator>::difference_type		difference_type;
		typedef size_t													size_type;
	};
};

#endif
