#include<iostream>
using namespace std;
class rectangle {
		public:
	float length,width;
		void data(){
			cout<<"\n enter a length=";
			cin>>length;
			cout<<"\n enter a width=";
			cin>>width;
		
		}
		void area()
		{
			cout<<"area  of rectangle ="<<length*width;
		}
				};
int main(){
rectangle r1;
r1.data();
r1.area();
return 0;
		
	}
