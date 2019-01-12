
//Description	: Defines and operates over polynomials

#include <string>
#include <iostream>

using namespace std;

class polynomial
{
	//Attributers
	
	int* array;
	int highestPower;
	
	//Constructor
	public:
		/*  
		Description	: Constructor for polynomial class 
		*/
		polynomial(int hp,int* seq);
		
		/*  
		Description	: Constructor for polynomial class without any variables
		*/
		polynomial();
		
		
		// operators
		
		/*
		Description	: 
		*/
		polynomial operator+(const polynomial& p);
		
		/*
		Description	:
		*/
		polynomial operator+=(const polynomial& p);
		
		/*
		Description	:
		*/
		polynomial operator-(const polynomial& p);
		
		/*
		Description	:
		*/
		polynomial operator-=(const polynomial& p);
		
		/*
		Description	: return the current polynomial after multiple every element of the sequence by the integer a
		*/
		polynomial operator*(const int& a);
		
		/*
		Description	: multiple every element of the sequence by the integer a
		*/
		polynomial operator*=(const int& a); 
		
		/*
		Description	: return the current polynomial after multiple by another polynomial a
		*/
		polynomial operator*(const polynomial& p);
		
		/*
		Description	: modifies the current polynomial after multiplying it by the other polynomial a
		*/
		polynomial operator*=(const polynomial& p); 
		
		//Functions
		
		/*
		Description	:
		*/
		void fromFile(string filename );
		
		/*
		Description	:
		*/
		void toFile( string filename );
		
		/*
		Description	: return the information of the polynomial in readable form
		*/
		void display(); 
		
		/*
		Description	: return euclidean distance from two polynomial
		*/
		float distance(polynomial p); 
};
