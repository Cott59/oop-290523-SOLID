#include<iostream>

class Vector {
private:
	int _size;
	int* _massivPtr;
public:
	Vector() {
		_size = 0;
		_massivPtr = nullptr;
	}
	void Push_Back(int element) {
		_size++;
		int* newMassiv = new int[_size];
		if (_massivPtr == nullptr) {
			newMassiv[0] = element;
			_massivPtr = newMassiv;
			return;
		}

		for (int i = 0; i < _size - 1; ++i)
			newMassiv[i] = _massivPtr[i];

		newMassiv[_size - 1] = element;
		
		int* temp = _massivPtr;
		_massivPtr = newMassiv;


		delete[]temp;
	}

	void ShowElemments() {
		for (int i = 0; i < _size; ++i)
			std::cout << i << " elemment: " << _massivPtr[i] << '\n';

	}
};




int main() {

	Vector* vector = new Vector();
	vector->Push_Back(40);
	vector->Push_Back(30);
	vector->Push_Back(20);
	vector->Push_Back(10);
	vector->ShowElemments();

	return 0;
}