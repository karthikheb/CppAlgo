//Selection Sort cpp implementation
//Takes in array of elements T and size of array as parameters
//T should implement '>' operator

template<class T>
inline void swapItem(T& a, T& b)
{
	T temp(a);
	a = b;
	b = temp;
}

template<class T>
void selectionSort( int size, T items[])
{
	for(int count=0; count < size - 1; ++count)
	{
		int minIndex = count;
		T* minValue = items + count;

		for(int index = count + 1; index < size; ++index)
		{
			if(items[index] < *(minValue))
			{
				minIndex = index;
				minValue = items + index;
			}
		}
		swapItem(*(items+count), *minValue);
	}
}