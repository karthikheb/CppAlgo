template<class T>
inline void swapItem(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<class T>
void bubbleSort( int size, T* items)
{
	for(int count=0; count < size - 1; ++count)
	{
		for(int index = 1; index < size - count ; ++index)
		{
			if(items[index-1] > items[index])
				swap(items[index-1] , items[index]);
		}
	}
}