#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
    private:

        T *				_arr;
		unsigned int	_size;

    public:

        Array<T>() : _arr(new T[0]), _size(0) {};
		Array<T>(unsigned int n) : _arr(new T[n]), _size(n) {};
        Array<T>(Array<T> const & src) : _arr(NULL) { *this = src; };
        virtual ~Array<T>() { delete [] _arr; };

        Array<T> & operator=(Array<T> const & rhs) {
			delete [] (_arr);
			this->_size = rhs.size();	
			_arr = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				(*this)[i] = rhs[i];
			return (*this);
		};

		T &		operator[](unsigned int i) const {
			if (i >= this->_size)
				throw (Array<T>::OutOfArrayLimits());
			return (this->_arr[i]);
		};

		class OutOfArrayLimits : public std::exception {
			public:
				virtual const char* what() const throw() { return ("index is out of the array limits"); }	
		};

		unsigned int	size() const { return (this->_size); }
};

#endif
