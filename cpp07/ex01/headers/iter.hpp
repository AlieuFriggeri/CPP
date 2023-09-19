#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void  iter(T arr[], int size, T (*f)(T))
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = f(arr[i]);
		//std::cout << arr[i] << std::endl;
	}
}

template<typename T>
T	add(T x)
{
	return x + 1;
}


#endif