#include <iostream>
#include <stack>
using namespace std;

/*
Method in HackerRank
	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }

	void levelOrder(Node * root){
      //Write your code here
        queue<Node*> traversal;
        traversal.push(root);
        while(!traversal.empty()){
            Node* tmp = traversal.front();
            if(tmp->left!=NULL)
                traversal.push(tmp->left);
            if(tmp->right!=NULL)
                traversal.push(tmp->right);
            cout<<tmp->data<<" ";
            traversal.pop();
        }
  
	}

*/

class Node
{
    friend class List;

private:
    Node *left;
    Node *right;
    int data;

public:
    Node(int n)
    {
        this->left = NULL;
        this->right = NULL;
        this->data = n;
    }
    Node *GetLeft()
    {
        return left;
    }
    Node *GetRight()
    {
        return right;
    }
    int GetData()
    {
        return data;
    }
};

class List
{

private:
    Node *head;

public:
    List()
    {
        head = NULL;
        //head = new Node(0);
    }
    void insert(int data)
    {
        if (head == NULL)
        {
            head = new Node(data);
            return;
        }
        Node *tmp = head;
        Node *before = tmp;
        while (tmp != NULL)
        {
            if (tmp->data > data)
            {
                before = tmp;
                tmp = tmp->left;
            }
            else if (tmp->data < data)
            {
                before = tmp;
                tmp = tmp->right;
            }
        }
        if (data > before->data)
            before->right = new Node(data);
        else if (data < before->data)
            before->left = new Node(data);
        return;
    }
    Node *GetHead()
    {
        return head;
    }
    int GetHeight(Node *root)
    {
        /*int height = 0;
        stack<Node *> path;
        path.push(this->GetHead());
        while (!path.empty())
        {
            Node *tmp = path.top();

            if (tmp->GetRight() == NULL && tmp->GetLeft() == NULL)
            {
                height = path.size() > height ? path.size() : height;
                path.pop();
            }

            if (tmp->GetRight() != NULL)
                path.push(tmp->GetRight());
            if (tmp->GetLeft() != NULL)
                path.push(tmp->GetLeft());
        }

        return height;
        */
        //Write your code here
        if (!root)
        {
            return -1;
        }
        int leftDepth = GetHeight(root->GetLeft());
        int rightDepth = GetHeight(root->GetRight());

        return (leftDepth > rightDepth ? leftDepth : rightDepth) + 1;
    }
};

void PrintTree(Node *head)
{
    //Node tmpli.GetHead()
    Node *tmp = head;
    if (tmp != NULL)
    {
        PrintTree(tmp->GetLeft());
        cout << tmp->GetData() << " ";
        PrintTree(tmp->GetRight());
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    List myList;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        myList.insert(temp);
    }
    //PrintTree(myList.GetHead());
    cout << myList.GetHeight(myList.GetHead()) << endl;
    return 0;
}