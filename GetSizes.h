#pragma once
template <class T>
class GetSizes
{
	public:
		GetSizes(T _first, T _last);
		T GetBigger();
		T GetSmaller();
	
	private:
		T first;
		T last;
};

template <class T>
GetSizes<T>::GetSizes(T _first, T _last)
{
	first = _first;
	last = _last;
}

template <class T>
T GetSizes<T>::GetBigger()
{
	if (first > last)
	{
		return first;
	}
	return last;
}

template <class T>
T GetSizes<T>::GetSmaller()
{
	if (first < last)
	{
		return first;
	}
	return last;
}