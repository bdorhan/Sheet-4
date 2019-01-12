// WARNING: this file is only function definition of the class declared in Polynomial.h

#include "Polynomial.h"

polynomial ::polynomial(int hp,int* seq) {
	highestPower = hp;
	array = new int[hp+1];
	array = seq;
}

polynomial ::polynomial() {
	highestPower = 0;
	array = new int[1];
	array[0] = 0;
}

polynomial polynomial ::operator+ (const polynomial& p) {
	if(p.highestPower==highestPower) {
		polynomial q;
		for(int i = 0;i<highestPower+1;i++) {
			array[i] = p.array[i] + array[i];
		}
		q.array = array;
		q.highestPower=highestPower;
		return q;
	}
	else if(p.highestPower<highestPower) {
		int* s = new int[highestPower];
		polynomial q(highestPower,s);
		for(int i = 0;i<p.highestPower+1;i++) {
			array[i] = p.array[i] + array[i];
		}
		for(int i = p.highestPower;i<highestPower;i++) {
			array[i] = array[i];
		}
		q.array = array;
		q.highestPower=highestPower;
		return q;
	}
	else if(p.highestPower>highestPower) {
		int* s = new int[p.highestPower];
		polynomial q(p.highestPower,s);
		for(int i = 0;i<highestPower+1;i++) {
			p.array[i] = p.array[i] + array[i];
		}
		for(int i = highestPower;i<p.highestPower;i++) {
			p.array[i] = p.array[i];
		}
		q.array = p.array;
		q.highestPower=p.highestPower;
		return q;		
	}
}

polynomial polynomial ::operator+= (const polynomial& p) {
	if(p.highestPower==highestPower) {
		int* s = new int[highestPower];
		polynomial q(highestPower,s);
		for(int i = 0;i<highestPower+1;i++) {
			q.array[i] = p.array[i] + array[i];
		}
		return q;
	}
	else if(p.highestPower<highestPower) {
		int* s = new int[highestPower];
		polynomial q(highestPower,s);
		for(int i = 0;i<p.highestPower+1;i++) {
			q.array[i] = p.array[i] + array[i];
		}
		for(int i = p.highestPower;i<highestPower;i++) {
			q.array[i] = array[i];
		}
		return q;
	}
	else if(p.highestPower>highestPower) {
		int* s = new int[p.highestPower];
		polynomial q(p.highestPower,s);
		for(int i = 0;i<highestPower+1;i++) {
			q.array[i] = p.array[i] + array[i];
		}
		for(int i = highestPower;i<p.highestPower;i++) {
			q.array[i] = array[i];
		}
		return q;		
	}
}

polynomial polynomial ::operator- (const polynomial& p) {
	if(p.highestPower==highestPower) {
		int* s = new int[highestPower];
		polynomial q(highestPower,s);
		for(int i = 0;i<highestPower+1;i++) {
			q.array[i] = p.array[i] - array[i];
		}
		return q;
	}
	else if(p.highestPower<highestPower) {
		int* s = new int[highestPower];
		polynomial q(highestPower,s);
		for(int i = 0;i<p.highestPower+1;i++) {
			q.array[i] = p.array[i] - array[i];
		}
		for(int i = p.highestPower;i<highestPower;i++) {
			q.array[i] = array[i];
		}
		return q;
	}
	else if(p.highestPower>highestPower) {
		int* s = new int[p.highestPower];
		polynomial q(p.highestPower,s);
		for(int i = 0;i<highestPower+1;i++) {
			q.array[i] = p.array[i] - array[i];
		}
		for(int i = highestPower;i<p.highestPower;i++) {
			q.array[i] = array[i];
		}
		return q;		
	}
}

polynomial polynomial ::operator-= (const polynomial& p) {
	if(p.highestPower==highestPower) {
		int* s = new int[highestPower];
		polynomial q(highestPower,s);
		for(int i = 0;i<highestPower+1;i++) {
			q.array[i] = p.array[i] - array[i];
		}
		return q;
	}
	else if(p.highestPower<highestPower) {
		int* s = new int[highestPower];
		polynomial q(highestPower,s);
		for(int i = 0;i<p.highestPower+1;i++) {
			q.array[i] = p.array[i] - array[i];
		}
		for(int i = p.highestPower;i<highestPower;i++) {
			q.array[i] = array[i];
		}
		return q;
	}
	else if(p.highestPower>highestPower) {
		int* s = new int[p.highestPower];
		polynomial q(p.highestPower,s);
		for(int i = 0;i<highestPower+1;i++) {
			q.array[i] = p.array[i] - array[i];
		}
		for(int i = highestPower;i<p.highestPower;i++) {
			q.array[i] = array[i];
		}
		return q;		
	}
}

polynomial polynomial ::operator*(const int& a) {
	int* s = new int[highestPower];
	polynomial q(highestPower,s);
	
	for(int i = 0;i<highestPower;i++) {
		q.array[i] = array[i] * a;
	}
	
	return q;
}

polynomial polynomial ::operator*=(const int& a) {
	int* s = new int[highestPower];
	polynomial q(highestPower,s);
	
	for(int i = 0;i<highestPower;i++) {
		q.array[i] = array[i] * a;
	}
	
	return q;
}

void polynomial :: display() {
	cout << "Your function is: f(x) = ";
    
    for(int i = highestPower-1; i >= 0; i--)
    {
       if(array[i] != 0) {
       		if(i != 0)
       			cout << array[i] <<"x^"<<i<<"+";
       		else
				cout << array[i];   	
	   }
    }     
}
