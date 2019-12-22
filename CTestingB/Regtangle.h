
class Regtangle:public Shape
{
public:
	Regtangle(int width , int heigh) :Shape(width,heigh) {

		
	}

    float Area() {

		return this->dim1 *this->dim2;
	}
	
	


};

