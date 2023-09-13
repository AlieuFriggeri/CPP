#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template<typename T>
class Array {

	public:
	Array<T>(void) : _arr(new T()), _size(0)
	{

	}

	Array<T>(unsigned int n) : _arr(new T[n]), _size(n)
	{
		for (unsigned int i = 0; i < _size; i++)
		{
			_arr[i] = 42;
		}
	}

	Array<T>(Array<T> &src) : _size(src._size)
	{
		_arr = new T[_size];
		for(unsigned int i = 0; i < src._size; i++)
			_arr[i] = src._arr[i];
	}
	~Array<T>(void)
	{
		delete [] _arr;
	}

	void printArr(void)
	{
		if (this->_size <= 0)
		{
			std::cout << "Empty array" << std::endl;
			return;
		}
		for (unsigned int i = 0; i < _size; i++)
		{
			std::cout << _arr[i] << std::endl;
		}
	}

	Array<T> &operator=(Array<T> const &src)
	{
		if (this != &src)
		{
			delete [] _arr;
			this->_arr = new T[src._size];
			this->_size = src._size;
			for( unsigned int i = 0; i < src._size; i++)
				_arr[i] = src._arr[i];
		}
		return *this;
	}

	T &operator[](unsigned int i)
	{
		if (i >= _size)
			throw (OOBexception());
		return _arr[i];
	}

	class OOBexception : public std::exception{
		public:
			virtual const char *what() const throw() {return "Error: index out of bound";}
	};

	unsigned int size()
	{
		return _size;
	}
	
	private:
	T *_arr;
	unsigned int _size;
};


#endif