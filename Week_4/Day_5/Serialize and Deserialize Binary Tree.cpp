/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    void buildstring(TreeNode* root,string& s){
        if(root==NULL){
            s+="#,";
            return;
        }
        s+=to_string(root->val)+",";
        buildstring(root->left,s);
        buildstring(root->right,s);
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s="";
         buildstring(root,s);
         return s;
    }
     TreeNode* buildtree(vector<string>& nodes,int& i){
          if(nodes[i]=="#"){
            i++;
            return NULL;
          }
          TreeNode* root=new TreeNode(stoi(nodes[i]));
          i++;
          root->left=buildtree(nodes,i);
          root->right=buildtree(nodes,i);
          return root;
     }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        vector<string> nodes;
        string temp="";
        for(char c:data){
            if(c==','){
                nodes.push_back(temp);
                temp="";
            }
            else{
                temp+=c;
            }
        }
        int i=0;
        return buildtree(nodes,i);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));