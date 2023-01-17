#include <bits/stdc++.h>
using namespace std;
struct Node
{
int data;
struct Node *left;
struct Node *right;
Node (int val) {
data = val;
left = right = NULL;
}
};
// Function to Build Tree
Node* buildTree(string str)
{
// corner Case
if(str.length() == 0 || str[0] == 'N')
return NULL;
// Creating vector of strings from input
// string after spliting by space
vector<string> ip;
istringstream iss(str);
for(string str; iss >> str; )
ip.push_back(str);
// Create the root of the tree
Node *root = new Node(stoi(ip[0]));
// Push the root to the queue
queue<Node*> queue;
queue.push(root);
// starting from the second element |
int i= 1; 
while(!queue.empty() && i < ip.size()) { 
// Get and remove the front of the queue
Node* currlode = queue.front(); 
queue.pop();

// Get the current node's value from the string
string currval = ip[i]; 

// If the left child is not null |
if(currval != "N") { |

// Create the left child for the current Node
currNode->left = new Node(stoi(currval)); 

// Push it to the queue

queue.push(curriode->left); 

}

// For the right child
i++;
if >= ip.size();
break; 
currval = ip[i]
// If the right child is not null
if(currval I= "N") {
// create the right child for the current node
currNode->right = new Node(stoi(currval));
// push it to the queue
queue. push(curriode->right);
}
i++;
}
return root;
}

//answer begins here

class Solution {
public:
    int maxGCD(Node* root) {
        
        if(!root)
            return 0;
        
        if(!root->left && !root->right)
            return 0;
        
        int maxGCD = 0;
        int currGCD = 0;
        int nodeVal = 0;
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()) {
            Node* curr = q.front();
            q.pop();
            
            if(curr->left && curr->right) {
                int leftVal = curr->left->data;
                int rightVal = curr->right->data;
                currGCD = __gcd(leftVal, rightVal);
                
                if(maxGCD < currGCD) {
                    maxGCD = currGCD;
                    nodeVal = curr->data;
                } else if(maxGCD == currGCD) {
                    nodeVal = max(nodeVal, curr->data);
                }
            }
            
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
        }
        
        return nodeVal;
        
    }
};

//Answer Ends here

int main(){
int t;
scanf("%d",&t);
while(t--)
{ 
string treeString;
getline(cin, treeString);
Node* root = buildTree(treeString);
Solution ob;
cout<<ob.maxGCD(root)<<endl;
}
return 0;
}