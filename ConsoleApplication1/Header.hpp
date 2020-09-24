#pragma once
class Vect2{
public:
	float x;
	float y;
	Vect2 (){}
	Vect2(float x, float y) {
		this->x = x;
		(*this).y = y;
	}
	Vect2 Add (Vect2 vadd) {
		return Vect2(this->x + vadd.x, this->y + vadd.y);
	}
	Vect2 Sub(Vect2 vadd) {
		return Vect2(this->x - vadd.x, this->y - vadd.y);
	}
	Vect2 Mul(Vect2 vadd) {
		return Vect2(this->x * vadd.x, this->y * vadd.y);
	}
	Vect2 Div(Vect2 vadd) {
		return Vect2(this->x / vadd.x, this->y / vadd.y);
	}
	void incr(Vect2& vec) {
		vec.x++;
	}
};