//graphs and tree
//#include<iostream>
//using namespace std;
//class Node{
//	public:
//	int data;
//	Node* left;
//	Node* right;
//	Node(int val){
//		data=val;
//		left=NULL;
//		right=NULL;
//		
//	}
//};
//void preOrder(Node* root){
//	if(root==NULL){
//		return;
//	}
//	cout<<root->data<<" ";
//	preOrder(root->left);
//	preOrder(root->right);
//}
//void inOrder(Node* root){
//	if(root==NULL){
//		return;
//	}
//	preOrder(root->left);
//	cout<<root->data<<" ";
//	preOrder(root->right);
//}
//void postOrder(Node* root){
//	if(root==NULL){
//		return;
//	}
//	postOrder(root->left);
//	postOrder(root->right);
//	cout<<root->data<<" ";
//}
//
//int main()
//{
//	Node* root = new Node(1);
//	root->left = new Node(2);
//	root->right= new Node(3);
//	root->left->left= new Node(4);
//	root->left->right = new Node(5);
//	root->right->left=new Node(6);
//	root->right->right= new Node(7);
//	preOrder(root);
//inOrder(root);
//postOrder(root);
//}
//..................................................
//traverse in a tree(level order traversal)
//#include<iostream>
//using namespace std;
//class Node{
//		public:
//	int data;
//	Node* left;
//	Node* right;
//	Node(int val){
//		data=val;
//		left=NULL;
//		right=NULL;
//		
//	}
//};
//};
//void printLevelOrder(Node* root){
//	if(root==NULL) return;
	//first create a queue and push root and NUll
//	queue<Node*>q;
//	q.push(root);
//	q.push(NULL);
	//iterate until queue is empty
//	while(!q.empty()){
//		Node* node=q.front();
//		q.pop();
//		if(node!=NULL){
//			cout<<node->data<<"";
//	
//		if(node->left){
//			q.push(node->left);
//		}
//		if(node->right){
//			q.push(node->right);
//		}
//		}
//		else if(!q.empty()){
//			q.push(NULL);
//		}
//	}
//	
//	}
//}
//...........................................................
//Sum At k element
//#include<iostream>
//#include<queue>
//using namespace std;
//class Node{
//	public:
//	int data;
//	Node* left;
//	Node* right;
//	Node(int val){
//		data=val;
//		left=NULL;
//		right=NULL;
//		
//	}
//};
//int sumAtK(Node* root, int k){
//	if(root==NULL) return -1;
//	queue<Node*>q;
//	q.push(root);
//	q.push(NULL);
//	int level =0;
//	int sum=0;
//	while(!q.empty()){
//		Node* node=q.front();
//		q.pop();
//		if(node!=NULL){
//			if(level == k){
//				sum+=node->data;
//			}
//			if(node->left) q.push(node->left);
//			if(node->right) q.push(node->right);
//		}
//		else if(!q.empty()){
//			q.push(NULL);
//			level++;
//		}
//	}
//	return sum;
//}
//int main(){
//	Node* root = new Node(1);
//	root->left = new Node(2);
//	root->right= new Node(3);
//	root->left->left= new Node(4);
//	root->left->right = new Node(5);
//	root->right->left=new Node(6);
//	root->right->right= new Node(7);
//	cout<<sumAtK(root, 2);
//}
//..................................................
//count number of nodes on both side right and left
//#include<iostream>
//#include<queue>
//using namespace std;
//class Node{
//	public:
//		int data;
//		Node* left;
//		Node* right;
//		Node(int val){
//			data=val;
//			left=NULL;
//			right=NULL;
//		}
//};
//int countNodes(Node* root){
//	if(root == NULL) return 0;
//	int lc=countNodes(root->left);
//	int rc=countNodes(root->right);
//	return lc+ rc +1;
//	return countNodes(root->left) + countNodes(root->right)+1;
//}
//......................................sumOfNodes
//int sumOfNodes(Node* root){
//	if(root==NULL) return 0;
//	int ls=sumOfNodes(root->left);
//	int rs=sumOfNodes(root->right);
//	return ls+rs+root->data;
//	return sumOfNodes(root->left)+sumOfNodes(root->right)+root->data;
//}
//question-height of tree.................
//int calculateHeight(Node* root){
//	if(root==NULL)
//		return 0;
//	int lh=calculateHeight(root->left);
//	int rh=calculateHeight(root->right);
//	return max(lh,rh)+1;	
//}
//question- find right view of this tree 
//void rightView(Node* root){
//	if(root==NULL) return;
//	queue<Node*>q;
//	q.push(root);
//	while(!q.empty()){
		//we will not add null in queue ,we will calculate the size of the queue and check
		//how many nodes are stored and traverse over it.
//		int n=q.size();
//		for(int i=0;i<n;i++){
			//creating a curr pointer that will start from the front of queue
//			Node* curr=q.front();
//			q.pop();
			//when we will reach at last node
//			if(i == n-1){
//				cout<<curr->data<<" ";
//			}
//			if(curr->left)q.push(curr->left);
//			if(curr->right)q.push(curr->right);			
//		}
//		
//	}
//}
//int main(){
//	Node* root = new Node(1);
//	root->left = new Node(2);
//	root->right= new Node(3);
//	root->left->left= new Node(4);
//	root->left->right = new Node(5);
//	root->right->left=new Node(6);
//	root->right->right= new Node(7);
//	root->left->left->left=new Node(9);
	//cout<<sumOfNodes(root);
	//cout<<calculateHeight(root);
//	rightView(root);
//}
//...............................................
//BST(Binary searchtree)
//#include<iostream>
//using namespace std;
//Binary search tree are special kind of trees used for fast lookup,insertion and deletion.
//class Node{
//	public: 
//	int data;
//	Node* left;
//	Node* right;
//	Node(int val){
//		data=val;
//		left=NULL;
//		right=NULL;
//	}
//};
//Node* insertBST(Node* root, int val){
//	if(root==NULL) return new Node(val);
//	if(val<root->data){
//	root->left=	insertBST(root->left,val);
//	}
//	else{
//		root->right=insertBST(root->right, val);
//	}
//	return root;
//}
//void inorder(Node* root){
//	if(root==NULL){
//		return;
//	}
//	inorder(root->left);
//	cout<<root->data<<" ";
//	inorder(root->right);
//}
//Node* searchInBST(Node* root, int key){
//	if(root ==NULL) return NULL;
//	if(root->data ==key) return root;
//	if(root->data>key){
//		return searchInBST(root->left,key);
//	}
//	return searchInBST(root->right,key);
//}
//................................
// minimum element in BST
//Node* minValue(Node* root){
//Node* temp=root;
//while(temp->left !=NULL){
//	temp=temp->left;
//}
//return temp;	
//}
//minimum element in BST
//Node* maxValue(Node* root){
//	Node* temp=root;
//	while(temp->right !=NULL){
//		temp=temp->right;
//	}	
//	return temp;
//}
//...........................
//int main(){
	//Node* root=NULL;
//	Node* root= new Node(4);
//	root->left=new Node(2);
//	root->right=new Node(5);
//	root->left->left=new Node(1);
//	root->left->right=new Node(3);
//	root=insertBST(root, 5);
//	insertBST(root,1);
//	insertBST(root,3);
//	insertBST(root,4);
//	insertBST(root,7);
//	inorder(root);
//}
//......................................................................
// delete from BST 1.no child, 2. one child ,3. 2 child;
#include<iostream>
using namespace std;
class Node{
	public: 
	int data;
	Node* left;
	Node* right;
	Node(int val){
		data=val;
		left=NULL;
		right=NULL;
	}
};
Node* deleteFromBST(Node* root, int val){
	if(root == NULL) return root;
	if(root->data == val){
		//0 child
		if(root->left == NULL && root->right ==NULL){
			delete root;
			return NULL;
		}
		//1 child
		//left child
		if(root->left !=NULL && root->right ==NULL){
			Node* temp =root->left;
			delete root;
			return temp;
		}
		//right child
		if(root->left == NULL && root->right !=NULL){
			Node* temp=root->right;
			delete root;
			return temp;
		}
		//2 child 
		//either find max from LST or min form RST
		if(root->left !=NULL && root->right == NULL){
		int mini =minValue(root->right)->data;
		//replacing the value
		root->data=mini;
		root->right= deleteFromBST(root->right,mini);
		return root;
		}
	}
}
//.............................................
//leetcode question.
class Solution{
	public: 
	bool isBST(Node* root,int min,int max){
		if(root==NULL) return true;
		if(root->data>min && root->data<max){
		bool left=isBST(root->left,min,root->data);
		bool right=isBST(root->right,root->data,max);
		return left && right;
		}
		else return false;
	}
	bool isBST(Node* root){
		isBST(root, INT_MIN,INT_MAX);
	}
};
// naukri 360.com question................................
//Two Sum IV -input in BST
void inorder(BinaryTreeNode<int>* root, vector<int> &vec){
	if(root==NULL) return;
	inorder(root->left,vec);
	vec.push_back(root->data);
	inorder(root->right,vec);
}
bool twoSumInBST(BinaryTreeNode<int>* root, int target){
	vector<int> inorderVal);
	inorder(root, inorderVal);
	int i=0;
	int j=inorder.size()-1;
	while(i<j){
		int sum=inorderVal[i]+inorderVal[j];
		if(sum ==target)return true;
		else if(sum<target)i++;
		else j--;
	}
	return false;
	}
