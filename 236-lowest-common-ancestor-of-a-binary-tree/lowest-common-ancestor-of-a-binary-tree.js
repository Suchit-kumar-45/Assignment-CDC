/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @param {TreeNode} p
 * @param {TreeNode} q
 * @return {TreeNode}
 */
var lowestCommonAncestor = function(root, p, q) {
    if(root===null)
    {
        return null;
    }
    if(root===p || root===q)
    {
        return root;
    }
    let leftAns=lowestCommonAncestor(root.left,p,q);
    let rightAns=lowestCommonAncestor(root.right,p,q);

    if(leftAns!=null && rightAns!=null)
    {
        return root;
    }
    if(leftAns!=null && rightAns==null)
    {
        return leftAns;
    }
    if(leftAns==null && rightAns!=null)
    {
        return rightAns;
    }
    return null;

    
};