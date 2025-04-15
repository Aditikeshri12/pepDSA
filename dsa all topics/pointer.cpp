//pointer 
//question-1
// #include<iostream>
// using namespace std;
// int main(){
// 	int a1=5;
// 	int a2=4;
// 	cout<<&a1<<endl;
// 	cout<<&a2<<endl;
// 	int *ptr=&a1;
// 	cout<<ptr<<endl;
// }
//question-2
//pass by value..................................................................
// #include<iostream>
// using namespace std;
// void test(int num){//(pass by value hai ya copy karta hai main function ka
// // liken reference me address show karta h main function ka)
// 	++num;
// 	cout<<"num value in test :"<<num<<endl;
// }
// int main(){
// 	int num;
// 	cin>>num;
// 	test(num);
// 	cout<<"Final output:"<<num<<endl;
// }
//pass by reference......................................................
// #include<iostream>
// using namespace std;
// void test(int &num){//(pass by value hai ya copy karta hai main function ka
// // liken reference me address show karta h main function ka)
// 	++num;
// 	cout<<"num value in test :"<<num<<endl;
// }
// int main(){
// 	int num;
// 	cin>>num;
// 	test(num);
// 	cout<<"Final output:"<<num<<endl;
// }
