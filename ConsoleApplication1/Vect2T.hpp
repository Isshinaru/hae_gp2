#pragma once
template<typename T>
	class Vect2T
	{
	public:
		T x;
		T y;
		Vect2T<T>() {
			x = {};
			y = {};
		}
		Vect2T<T>(T x, T y) {
			this->x = x;
			this->y = y;
		};
		Vect2T<T> Add(Vect2T<T> vadd) {
			return Vect2T<T>(this->x + vadd.x, this->y + vadd.y);
		}
		Vect2T<T> Sub(Vect2T<T> vadd) {
			return Vect2T<T>(this->x - vadd.x, this->y - vadd.y);
		}
		Vect2T<T> Mul(Vect2T<T> vadd) {
			return Vect2T<T>(this->x * vadd.x, this->y * vadd.y);
		}
		Vect2T<T> Div(Vect2T<T> vadd) {
			return Vect2T<T>(this->x / vadd.x, this->y / vadd.y);
		}
	};

