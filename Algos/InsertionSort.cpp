//Insertion Sort cpp implementation
//Takes in array of elements T and size of array as parameters
//T should implement '<' operator

template<class T>
inline void swapItem(T& a, T& b)
{
	T temp(a);
	a = b;
	b = temp;
}

template<class T>
void insertionSort( int size, T items[])
{
	for(int count=1; count < size; ++count)
	{
		for(int index = count; (index > 0) && (items[index] < items[index - 1]); --index)
		{
			swapItem(items[index-1] , items[index]);
		}
	}
}