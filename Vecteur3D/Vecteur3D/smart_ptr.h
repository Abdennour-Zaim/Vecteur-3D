#pragma once
template<class T>
class smart_ptr
{
private: 
	T* p;

public: 
	smart_ptr(T v) {
		this->p = &v;
	}

	~smart_ptr() {
		delete this->p;
	}

};

