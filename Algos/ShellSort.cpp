//Shell Sort cpp implementation
//Takes in array of elements T and size of array as parameters
//T should implement '<' operator
//initially does insertion sort on smaller subsets of array to idealise the array

template<class T>
inline void swapItem(T& a, T& b)
{
	T temp(a);
	a = b;
	b = temp;
}

template<class T>
void insertionSortSubset( int size, T items[], int incr)
{
	for(int count=incr; count < size; count+=incr)
	{
		for(int index = count; (index > 0) && (items[index] < items[index - incr]); index-=incr)
		{
			swapItem(items[index-incr] , items[index]);
		}
	}
}

template<class T>
void shellSort( int size, T items[])
{
	for(int incr=size/2; incr > 1 ;  incr/=2)
	{
		for(int startPos = 0; startPos < incr; ++startPos)
		{
			insertionSortSubset(size-startPos, items+startPos, incr);
		}
	}
	insertionSortSubset(size, items, 1);
}