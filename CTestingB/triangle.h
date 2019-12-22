
class triangle:public Shape 
{
public:
	triangle(int base, int heigh):Shape(base,heigh) {

	
	}

	 float Area() {

		 return ((0.5*this->dim1) *this->dim2);
	}
	
	 

private:

};



