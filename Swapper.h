#pragma once
template <class T>
class Swapper
{
	public:
		Swapper(T _first, T _last);
		void Swap();
		T GetFirst() const;
		T GetLast() const;
	
	private:
		T first;
		T last;
};

template <class T>
Swapper<T>::Swapper(T _first, T _last)
{
	first = _first;
	last = _last;
}

template <class T>
void Swapper<T>::Swap()
{
	T temp = first;
	first = last;
	last = temp;
}


template <class T>
T Swapper<T>::GetLast() const
{
	return last;
}

template <class T>
T Swapper<T>::GetFirst() const
{
	return first;
}