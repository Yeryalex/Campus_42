#ifndef ARRAY_TPP
# define	ARRAY_TPP

template	<typename T>
Array<T>::Array(): arr(NULL), arr_size(0) {}

template	<typename T>
Array<T>::Array(unsigned int n): arr(new T[n]()), arr_size(n) { }

template	<typename T>
Array<T>::Array(const Array &obj): arr(NULL), arr_size(0) {

	*this = obj;
}

template	<typename T>
Array<T>	&Array<T>::operator=(const Array &obj) {

	if (this != &obj) {
		delete[] arr;
		this->arr_size = obj.arr_size;
		this->arr = new T[arr_size];

		for (unsigned int i = 0; i < arr_size; i++)
			this->arr[i] = obj.arr[i];
	}
	return (*this);
}

template	<typename T>
Array<T>::~Array() {

	delete[] arr;
}

template	<typename T>
unsigned int	Array<T>::size(void) const{
	return (this->arr_size);
}

template	<typename T>
const char	*Array<T>::outBoundsException::what() const throw() {
	return ("The index provided is out of boundaries");
}


template	<typename T>
T	&Array<T>::operator[](unsigned int index) {

	if (index >= arr_size || index < 0)
		throw Array<T>::outBoundsException();	
	return (arr[index]);
}

template	<typename T>
const T	&Array<T>::operator[](unsigned int index) const {

	if (index >= arr_size || index < 0)
		throw Array<T>::outBoundsException();	
	return (arr[index]);
}

#endif
