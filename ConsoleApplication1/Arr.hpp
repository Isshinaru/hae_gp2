#pragma once
template<typename T>
class Arr {
public:
	T* data = nullptr;
	int size=0;
	Arr(int _size) {
		data = new T[_size];
		this->size = _size;
		for (int i = 0; i < size; i++) {
			data[i] = {};
		}
	}
	virtual ~Arr() {
		delete[] data;
		throw "deleted";
	}
	T& Get(int idx) {
		if (idx < 0 || idx >= size) {
			throw "OOB";
		}
		else {
			return data[idx];
		}
	}
	void Set(int idx, T value) {
		if (idx < 0 || idx >= size) {
			throw "OOB";
		}
		else {
			data[idx] = value;
		}
	}
};