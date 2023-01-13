#ifndef PAIR_HPP
# define PAIR_HPP

#include <iostream>

namespace ft
{
	template< class T1, class T2> 
	struct pair
	{
		typedef T1 first_type;
		typedef T2 second_type;

		pair();
		template<class U, class V> 
		pair(const pair<U,V>& pr);
		pair(const first_type& a, const second_type& b);

		T1	_first;
		T2	_second;

		pair&	operator=(const pair& pr);
		void	swap(pair<T1, T2> &x, pair<T1, T2> &y)
		template <size_t I, class T1, class T2> 
		typename tuple_element< I, pair<T1,T2> >::type&  get (pair<T1,T2>&  pr)
	};

	template <class T1, class T2>  pair<T1,T2> make_pair(T1 x, T2 y);
}

template <class T1, class T2>  bool operator== (const pair<T1,T2>& lhs, const pair<T1,T2>& rhs);
template <class T1, class T2>  bool operator!= (const pair<T1,T2>& lhs, const pair<T1,T2>& rhs);
template <class T1, class T2>  bool operator<  (const pair<T1,T2>& lhs, const pair<T1,T2>& rhs);
template <class T1, class T2>  bool operator<= (const pair<T1,T2>& lhs, const pair<T1,T2>& rhs);
template <class T1, class T2>  bool operator>  (const pair<T1,T2>& lhs, const pair<T1,T2>& rhs);
template <class T1, class T2>  bool operator>= (const pair<T1,T2>& lhs, const pair<T1,T2>& rhs);

# include "pair.tpp"
#endif