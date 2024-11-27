#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    char ch;
    int freq;
    Node *left,*right;
    Node(char ch,int freq){
        this->ch=ch;
        this->freq=freq;
        this->left=NULL;
        this->right=NULL;
    }
    Node(char ch, int freq, Node* left, Node* right){
        this->ch=ch;
        this->freq=freq;
        this->left=left;
        this->right=right;
    }
};
class compare{
    public:
    bool operator ( )(Node *a,Node *b){
        return a->freq > b->freq;
    }   
};
void printTree(Node *root,string str,unordered_map<char,string>&mp){
    if(root==NULL)return;
    if(!root->left && !root->right){
        mp[root->ch]=str;
    }
    printTree(root->left,str+"0",mp);
    printTree(root->right,str+"1",mp);
}
void buildHuffmanTree(string s){
    priority_queue<Node*,vector<Node*>,compare>pq;
    unordered_map<char,int>f;
    for(auto it:s){
        f[it]++;
    }
    for(auto &[x,y]:f){
        cout<<x<<endl;
        pq.push(new Node(x,y));
    }
    while(pq.size()!=1){
        Node* a=pq.top();
        pq.pop();
        Node* b=pq.top();
        pq.pop();
        pq.push(new Node('\0',a->freq+b->freq,a,b));
    }
    Node *root=pq.top();
    unordered_map<char,string>mp2;
    printTree(root,"",mp2);
    for(auto &[x,y]:mp2)cout<<x<<" "<<y<<endl;
}
int32_t main()
{
 string s="HUFFMAN";
//  cin>>s;
//  cout<<s<<endl;
 buildHuffmanTree(s);
}
