#include<bits/stdc++.h>
using namespace std;


class Node
{  public: 
    int data;
    vector<Node *> smalls;
    
    Node(int data)
    {this->data = data;
        
    }
};






int CountNonleafNodes(Node * root)
{




    bool small= false;
    if(root-> smalls.size() > 0)small=true;





   bool completesmalls = true;
    int count =0;
    for(int i=0;i<root-> smalls.size();i++)
    {


          bool value;
          if(root-> smalls.size() > 0 && root-> smalls[i]-> smalls.size() > 0  )value= true;
          else value= false;


        completesmalls = completesmalls && value;
        
        count +=CountNonleafNodes(root-> smalls[i]);
        
    


    }
    


    if(small && completesmalls)return count ;
    else if(small && !completesmalls)return count +1;
    else if(!small)return count ;



}



Node * takeInput() {
    int rootdata;
    cin>>rootdata;
    
    Node * root = new Node(rootdata);
    queue<Node *>pendingNodes;
    pendingNodes.push(root);
    


    while(pendingNodes.size()!=0) {
        
        
        Node * front = pendingNodes.front();
        
        pendingNodes.pop();
        
        int numChild;
        
        
        cin>>numChild;
        
        for(int i=0;i<numChild ; i++)
        {
               int childData;
               cin>>childData;
            Node * small = new Node(childData);
            front-> smalls.push_back(small);
            pendingNodes.push(small);
            
        }
    
    }
    
    return root;

}

int main(){
    // write your code
    Node * root = takeInput();
    
    int k;
    cin >> k;
    
    
    if(root-> smalls.size()==0) {
        
        
        if(1 <= k )cout<<"1 Mission Successful"<<endl;
        else cout<<"1 Mission Unsuccessful"<<endl;
        
        return 0;
    }
  
    
    
    int ans = CountNonleafNodes(root);
    
    
    if(ans <= k)cout<<ans<<" "<<"Mission Successful"<<endl;
    
    else cout<<ans<<" "<<"Mission Unsuccessful"<<endl;

    
    return 0;

}