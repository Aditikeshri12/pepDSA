//OOPS(object oriented programming)----------------------------------------------------
// #include<iostream>
// using namespace std;
// class Car{
	//Attributes->data members->var 
	//public,private,protected->modifier
	// public:
	// string color;
	// int price;
	// int speed;
    // Car(){
	// 	cout<<"this is contructor method"<<endl;
	// }
	//behaviour->member function->func
// 	void boostUp(){
		
// 	}
// };
// int main(){
// 	Car car1;
// 	car1.color="Black";
// 	car1.speed=100;
// 		cout<<car1.color<<endl;
// 	cout<<car1.speed<<endl;
//     Car car2;
// 	car2.color="Red";
// 	cout<<car2.color<<endl;
	
// }
//example-2
// #include<iostream>
// using namespace std;
// class room{
// 	public:
// 		int height;
// 		int width;
// 		room(){
			
// 		}
// 		room(int h){
// 			cout<<"1";
// 		}
// 		room(int height,int width){
// 			cout<<"This is parameter of constructor"<<endl;
// 			this->height=height;
// 			this->width=width;
// 		}
//         room(room &obj){//(obj is used to copy value of r1 to r2)
//         cout<<"this is copy constructor"<<endl;
// 			this->height=obj.height;
// 			this->width=obj.width;
// 		}
// 		~room(){
// 			cout<<"this is destructor"<<endl;
// 		}

// };
// int main(){
// 	room r1(3,5);
// 	//cout<<r1.height;
// 	room r2(r1);
// 	cout<<r2.height<<endl;
// }
//four pillar of oops concept
//encapsulation.....................................................................
//it is defined as binding together the data member and member functions
//we cannot access any data or function from the class directly.
//this will also help to control the modification of our data members
// #include<iostream>
// using namespace std;
// class Encapsulation{
// 	private:
// 		int salary;
// 	public:
// 		Encapsulation(int val){
// 			salary =val;
// 		}
// 		//getter
// 		int getSalary(){
// 			return salary;
// 		}
// 		//getter
// 		void setSalary(int amount){
// 			salary=amount;
// 		}
// };
// int main(){
// 	Encapsulation e1(1000);
// 	cout<<e1.getSalary()<<endl;
// 	e1.setSalary(2000);
// 	cout<<e1.getSalary()<<endl;
// }
