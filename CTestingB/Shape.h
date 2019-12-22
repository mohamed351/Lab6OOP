#include <string>
class  Shape
{
protected:
	int dim1;
	int dim2;
	
public:
	Shape() {
		this->dim1 = 0;
		this->dim2 = 0;
	}
	Shape(int dim1) {
		this->dim1 = this->dim2 = dim1;
	}
	Shape(int dim1,int dim2)
	{
		this->dim1 = dim1;
		this->dim2 = dim2;
	}
	int GetDim1() {
		return this->dim1;
	}
	int GetDim2() {
		return this->dim2;

	}

	void SetDim1(int dim) {
		this->dim1 = dim;
	}
	void SetDim2(int dim)
	{
		this->dim2;
	}
	 
	virtual float Area() = 0;
	
	





};
