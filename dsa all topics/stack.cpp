//Stack............LIFO
//#include<iostream>
//#include<stack>
//using namespace std;
//class MyStack{
//	int *arr;
//	int top;
//	int size;
//	MyStack(){
//		arr=new int[100];
//		top=-1;
//	}
//	void push(int val){
//		if(top == size-1){
//			cout<<"Stack overflow"<<endl;
//			return;
//		}
//		top++;
//		arr[top]=val;
//	}	
//	void pop(int val){
//		if(top ==size+1){
//			cout<<"Stack underflow"<<endl;
//			return;
//		}
//		top--;
//		arr[top]=val;
//	}
//	void is_empty(){
//		if(top==-1){
//			cout<<"Stack is empty"<<endl;
//			return;
//		}
//	}
//	void peak(){
//		if(top<0){
//			return is_empty();
//		}
//		
//	}
//};
//int main(){
//	stack<int> st;
//	st.push(1);
//	st.push(2);
//	st.push(3);
//	st.push(4);
//	cout<<st.top()<<endl;
//}
//............................................
//question-1
//i/p-"Hello how are you"
//o/p-"you are how Hello" 
//#include<iostream>
//#include<stack>
//using namespace std;
//void reverseSentence(string s){
//	stack<string> st;
//	for(int i=0;i<s.length();i++){
//		//until we get aspace char, we will keep adding the word 
//		string word="";
//		while(s[i] != ' '&& i< s.length()){
//			word += s[i];
//			i++;
//		}
//		st.push(word);
//	}
//	while(!st.empty()){
//		cout<<st.top()<<" ";
//		st.pop();
//		}
//}
//int main(){
//	string str="Hello, how are you?";
//	reverseSentence(str);
//}
//..............................................
//#include <iostream>
//#include <stack>
//using namespace std;
//
//bool isValid(string s){
//	stack<char> st;
//	bool ans=true;
//	for(int i=0;i<s.size();i++){
//		if(s[i]=='(' || s[i]=='{' || s[i] =='['){
//			st.push(s[i]);
//		}
//		else if(s[i]='}'){
//			if(st.top()=='{'&& !st.empty()){
//				st.pop();
//			}
//			else{
//				ans= false;
//				break;
//			}
//		}
//		else if(s[i]==']'){
//			if(st.top() == '[' && !st.empty()){
//				st.pop();
//			}
//			else{
//				ans=false;
//				break;
//			}
//		}
//	}
//	return ans;
//}
//int main(){
//	string str="[{[()]}]";
//	if(isValid(str)) {
//		cout << "Valid"<<endl;
//	}else{
//		cout << "Invalid"<<endl;
//	}
//
//}