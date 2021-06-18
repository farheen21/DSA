#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

//----------------------------------------------------------------------------------
struct Node
{
    int data;
    Node *left, *right;
 
    Node(int data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    }
};
void solve(Node* root) {
    //left right root
    if(root == NULL)
    return ;

    solve(root->left);
    solve(root->right);

    cout<<root->data<<" ";
    
}


//------------------------------------------------------------------------------------
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

      Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
    int tc = 1;
     cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve( root);
    }
}