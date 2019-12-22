

class Square :public Regtangle
{
public:
	Square(int line) :Regtangle(line, line) {


	}

	float Area() {

		return this->dim2 * this->dim1;
	}
	

private:

};

