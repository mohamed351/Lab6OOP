#include<iostream>
#include<conio.h>
#include "Shape.h"
#include "Circle.h"
#include "Regtangle.h";
#include "triangle.h";
#include "Square.h"

using namespace std;


struct Node {
	Shape * Data;
	Node *previuos;
	Node *Next;
};
class GeoShape
{
 
	 Shape *ptrshapv ;
	 int size;
	 Node data;
	 static  Node *Head;
	 static  Node *Tail;

public:
	
	GeoShape(Shape *shap)
	{
		this->size = 0;
		
		AddShape(shap);

	}
	
	int AddShape(Shape *shap)
	{
		int retval = 0;
		Node * ptr = new Node();
		if (ptr)
		{
			ptr->Data = shap;
			this->size++;
			if (Head == NULL)
			{
				Head = Tail = ptr;
			}
			else
			{
				Tail->Next = ptr;
				ptr->previuos = Tail;
				Tail = ptr;
			}
			retval = 1;
		}
		return retval;
	}
	Node * GetTheShape()
	{

		return Head;
	}

	int GetTheLenght() {

		return this->size;
	}
	
	


	



};
Node* GeoShape::Head = NULL;
Node* GeoShape::Tail = NULL;
class GeoShape2
{
	Shape **ptr;
	int size;
public :
	GeoShape2(Shape ** shap, int size) {

		this->size = size;
		ptr = shap;
		
		
	}
	int GetSize() {
		return this->size;
	}

	float TotalSumOfArea() {

		float sum = 0;
		for (int i = 0; i < this->size; i++)
		{
			sum += (ptr[i])->Area();
		}
	
	 return sum;
	}


	



};



int main() {

	

	Circle cl(10);
	
	
	Regtangle tangle(20, 40);
	

	
	triangle t1(20, 50);
	
	
	
	Square sq(5);




	GeoShape go(&cl);
	go.AddShape(&tangle);
	go.AddShape(&t1);
	go.AddShape(&sq);


	

	
	Node *Shap=  go.GetTheShape();

	while (Shap)
	{

		cout << Shap->Data->Area()<<endl;
		Shap = Shap->Next;
	}


	cout << "pointer to pointer ";
	cout << "======================== \n";
	
	Shape **ptr =(Shape**) malloc(sizeof(Shape )*4);
	*ptr = &cl;
	ptr[1] = &tangle;
	ptr[2] = &t1;
	ptr[3] = &sq;
	
	GeoShape2 g(ptr, 4);
	cout << g.TotalSumOfArea() << endl;

	
	


	
	






	
	
	_getch();

	return 0;
}