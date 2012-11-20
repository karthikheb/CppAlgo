//Merge Sort cpp implementation
//Takes in array of elements T and size of array as parameters
//T should implement '<' operator

template<class T>
void divideAndMerge(T items[], T temp[], int start, int end)
{
	if(start == end)
	{
		return;
	}
	else
	{
		int mid = (start+end) / 2;
		divideAndMerge(items, temp, start, mid);
		divideAndMerge(items, temp, mid+1, end);

		for(int index = start; index <= end; ++index)
			temp[index] = items[index];

		int l1 = start, l2 = mid+1;
		for(int index = start; index <= end; ++index)
		{
			if(l1 > mid)
				items[index] = temp[l2++];
			else if (l2 > end)
				items[index] = temp[l1++];
			else
			{
				if(temp[l1]<temp[l2])
					items[index] = temp[l1++];
				else
					items[index] = temp[l2++];
			}
		}

	}
}

template<class T>
void mergeSort( int size, T items[])
{
	T *temp = new T[size];
	divideAndMerge(items, temp, 0, size -1);
	delete []temp;
}