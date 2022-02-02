#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void	iter(T* arr, size_t size, void (*f)(T const &))
{
	for (size_t i = 0; i < size; i++)
		f(arr[i]);
}

template<typename T>
void	print(T const & x)
{
	std::cout << x << std::endl;
}
#endif
