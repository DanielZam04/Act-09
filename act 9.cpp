#include <iostream>

using namespace std;
	
struct punto{
	double x, y;
};

punto operator+ (const punto &p, const punto &q);
int main(){ 

	punto a, b, c, r;
	a.x = 0.0;
	a.y = -1.5;
	b.x = 2.4;
	b.y = 5.23;
	c.x = 0.0;
	c.y = 1.1;
	r = a + b + c;
	cout<<r.x<<","<<r.y<<endl;
 return 0;
}

punto operator+ (const punto &p, const punto &q){
punto r;
r.x = p.x + q.x;
r.y = p.y + q.y;
return r;
}
