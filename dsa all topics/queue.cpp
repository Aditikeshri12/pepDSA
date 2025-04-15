//queue
//#include<iostream>
//#include<queue>
//using namespace std;
//class Queue{
//	public:
//		int arr;
//		int front;
//		int rear;
//		int size;
//		Queue(){
//			arr=new int[size];
//			front=-1;
//			rear=-1;
//		}
//		void push(int val){
//			if(rear == size-1){
//				cout<<"Queue overflow"<<endl;
//				return;
//			}
//			rear++;
//			arr[rear]=val;
//			if(front=-1)front++;
//		}
//		void pop(){
//			if(front ==-1){
//				cout<<"Queue is empty"<<endl;
//				return;
//			}
//			front++;
//		}
//};
//....................................................
//reverse a queue
//#include<iostream>
//#include<queue>
//#include<stack>
//using namespace std;
//void reverseQueue(queue<int> &q){
//	stack<int> st;
//	while(!q.empty()){
//		st.push(q.front());
//		q.pop();
//		}
//	while(!st.empty()){
//		q.push(q.front());
//		q.pop();
//	}
//}
//int main(){
//	queue<int> q;
//	q.push(1);
//	q.push(2);
//	q.push(3);
//	q.push(4);
//	cout<<"Original queue: ";
//	queue<int> temp=q;
//	while(!temp.empty()){
//		cout<<temp.front()<<" ";
//		temp.pop();
//	}
//	cout<<endl;
//	//Reverse the queue
//	reverseQueue(q);
//	cout<<"Reversed queue: ";
//	temp=q;
//	while(!temp.empty()){
//		cout<<temp.front()<<" ";
//		temp.pop();
//		}
//		cout<<endl;
//		return 0;
//}
//........................................
//reverse first k element of queue 
//i/p->10 6 8 12 3
//o/p->6 10 8 12 3(if k=2)
//#include<iostream>
//#include<stack>
//#include<queue>
//using namespace std;
//queue<int> kReverseQueue(queue<int> q, int k){
	//create a stack
	//pop k element from q and push in stack
	//run a loop for n-k elements,pop then from q and push them back in queue
//	if(q.empty()|| k>q.size()|| k<=0)
//	return q;
//	stack<int> s;
//	for(int i=0;i<k;i++){
//		s.push(q.front());
//		q.pop();
//	}
//	while(!s.empty()){
//		q.push(s.top());
//		s.pop();
//		}
//		int n=q.size();
//		for(int i=0;i<n-k;i++){
//			q.push(q.front());
//			q.pop();
//		}
//		return q;
//}
//void printQueue(queue<int> q){
//	while(!q.empty()){
//		cout<<q.front()<<" ";
//		q.pop();
//	}
//	cout<<endl;
//}
//int main(){
//	queue<int> q;
//	q.push(10);
//	q.push(6);
//	q.push(8);
//	q.push(12);
//	q.push(3);
//	int k=2;
	//cout<<"Original Queue: ";
//	printQueue(q);
//	queue<int> modifiedQueue=kReverseQueue(q,k);
	//cout<<"Modified Queue: ";
//	printQueue(modifiedQueue);
//	return 0;
//}
//delete middle element...........................
//#include<bits/stdc++.h>
//void deleteFromStack(stack<int>&inputStack,int count,int size){
//	if(inputStack.empty() || count==size/2){
//		inputStack.pop();
//		return;
//	}
//	int temp=inputStack.top();
//	inputStack.pop();
//	deleteFromStack(inputStack,count+1,size);
//	inputStack.push(temp);
//}
//void deleteMiddle(stack<int> & inputStack,int N){
//	int count =0;
//	deleteFromStack(inputStack,count, N);
//}
//.............................................
//interleave the first half of the queue with second half
//class Solution{
//	public:
//		vector<int> rearrangeQueue(queue<int> &q){
			//new queue
//			queue<int> newQ;
//			vector<int> ans;
//			int size =q.size();
			//run a loop till size/2
		//	for(int i=0;i<size/2;i++){
				//the element of the first half of queue will get added
//				newQ.push(q.front());
//				q.pop();
//					}	
//					while(!newQ.empty())	{
//						ans.push_back(newQ.front());
//						newQ.pop();
//						ans.push_back(q.front());
//						q.pop();
//					}
//					return ans;}
//};