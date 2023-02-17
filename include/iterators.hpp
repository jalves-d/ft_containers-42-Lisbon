#ifndef ITERATOR_HPP
#define ITERATOR_HPP

# include <iterator>
# include <cstddef>

namespace ft
{
	//Iterator Traits
	template < class iterator >
	struct iterator_traits
	{
		typedef typename iterator::difference_type	difference_type;
		typedef typename iterator::value_type	value_type;
		typedef typename iterator::pointer	pointer;
		typedef typename iterator::reference	reference;
		typedef typename iterator::iterator_category	iterator_category;
	};

	template < class T >
	struct iterator_traits < T* >
	{
		typedef ptrdiff_t	difference_type;
		typedef T	value_type;
		typedef T*	pointer;
		typedef T&	reference;
		typedef std::random_access_iterator_tag	iterator_category;
	};

	template < class T >
	struct iterator_traits < const T* >
	{
		typedef ptrdiff_t	difference_type;
		typedef T	value_type;
		typedef T*	pointer;
		typedef T&	reference;
		typedef std::random_access_iterator_tag	iterator_category;
	};
	//Iterator
	template < class U >
	class iterator
	{
		public:
			typedef ptrdiff_t	difference_type;
			typedef U	value_type;
			typedef U*	pointer;
			typedef U&	reference;
			typedef const U*	const_pointer;
			typedef const U&	const_reference;
			typedef std::random_access_iterator_tag	iterator_category;
			typedef iterator < const U >	const_iterator;
		private:
			pointer _itr;
	};
};

#endif
