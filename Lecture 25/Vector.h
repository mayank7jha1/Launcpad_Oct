
template<typename T>

class Vector {
private:
	T *a;
	int current_index;
	int total_size;
public:
	Vector() {
		total_size = 1;
		current_index = 0;
		a = new T[total_size];
	}

	//How will I add Elements to
	//this container

	void push_back(int x) {

		if (current_index == total_size) {
			//Vector Poora bhar chuka hain double
			//size ka kardo.
			T *b = a;

			a = new T[2 * total_size];
			total_size = total_size * 2;
			//Copy Karna
			for (int i = 0; i < current_index; i += 1) {
				a[i] = b[i];
			}

			delete[]b;
		}

		a[current_index] = x;
		current_index += 1;
	}

	void pop_back() {
		current_index -= 1;
	}

	T front() {
		return a[0];
	}

	T back() {
		return a[current_index - 1];
	}

	int size() {
		return current_index;
	}

	T operator[](int i) {
		return a[i];
	}

	int capacity() {
		return total_size;
	}
};






