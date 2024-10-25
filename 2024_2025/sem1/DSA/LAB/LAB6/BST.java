class BST {
    public Node root;
    public BST() {
        root = null;
    }

    public Node insert(Node x, Integer key) { 
        if (x == null)
            return new Node(key);
        int cmp = key.compareTo(x.key); 
        if (cmp < 0)
            x.left = insert(x.left, key); 
        else if (cmp > 0)
            x.right = insert(x.right , key);
        else
            x.key = key;
        return x; 
    }
    public void NLR(Node x) { 
        if (x != null) 
        {
            System.out.print(x.key + " "); 
            NLR(x.left);
            NLR(x.right); 
        }
    }
    
    public void LNR(Node x) {
        if(x != null) {
            LNR(x.left);
            System.out.print(x.key + " ");
            LNR(x.right);
        }
    }

    // ex 3
    public void RNL(Node x) {
        if(x != null) {
            RNL(x.right);
            System.out.print(x.key + " ");
            RNL(x.left);
        }        
    }

    // ex 4
    private boolean containsKey(Node x, Integer key) {
        if(x == null) {
            return false;
        }

        int sig = key.compareTo(x.key);
        if(sig < 0) {
            return containsKey(x.left, key);
        } else if(sig > 0) {
            return containsKey(x.right, key);
        } else {
            return true;
        }
    }

    public boolean containsKey(Integer key) {
        return containsKey(root, key);
    }

    // ex5
    private Node deleteMax(Node x) {
        if(x.right == null) {
            return x.left;
        }

        x.right = deleteMax(x.right);
        return x;
    }

    public void deleteMax() {
        if(root == null) {
            System.out.println("Root null");
        } else {
            deleteMax(root);
        }
    }

    // ex6
    private Node delete_use_pre(Node x, Integer key) {
        if(root == null) {
            return null;
        }

        int sig = key.compareTo(x.key);
        if(sig < 0) {
            x.left = delete_use_pre(x.left, key);
        } if(sig > 0) {
            x.right = delete_use_pre(x.right, key);
        } else {
            if(x.left == null) {
                return x.right;
            }
            if(x.right == null) {
                return x.left;
            }
            x.key = max(x.left).key;
            x.left = deleteMax(x.left);
        }
        return x;
    }

    public void delete_use_pre(Integer key) {
        delete_use_pre(root, key);
    }

    private Node max(Node x) {
        if(x.right == null) {
            return x;
        }
        return max(x.right);
    }

    // Ex7
    public int height(Node x) {
        if(x == null) {
            return 0;
        }

        return Math.max(height(x.left), height(x.right)) + 1;
    }

    // Ex8
    public Integer sum(Node x) {
        if(x == null) {
            return 0;
        }
        return x.key + sum(x.left) + sum(x.right);
    }

    // Ex9 
    public Integer sumEven(Node x) {
        if(x == null) {
            return 0;
        }
        
        Integer sum = 0;
        if(x.key %2 == 0) {
            sum += x.key;
        }

        return sum + sumEven(x.left) + sumEven(x.right);
    }

    // Ex10
    public Integer countLeaves(Node x) {
        if(x == null) {
            return 0;
        }

        if(x.left == null && x.right == null) {
            return 1;
        }

        return countLeaves(x.left) + countLeaves(x.right);
    }
}