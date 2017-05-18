package algorthimPT;

public class BinaryTree {

    static class Node {
        int value;
        Node left;
        Node right;

        public Node(int value) {
            this.value = value;
            this.left = null;
            this.right = null;
        }

        public void add(int value) {
            if (value < this.value) {
                if (left == null) left = new Node(value);
                else left.add(value);
                
            } else if (value > this.value) {
                if (right == null) right = new Node(value);
                else right.add(value);
            }
        }

        public void print() {
            if (left != null) left.print();
            System.out.printf("%d ", value);
            if (right != null) right.print();
        }

    }

    public static void main(String[] args) {

        Node root = new Node(20);
        int[] list = {12, 65, 3, 19, 21, 45, 93, 23, 19, 50};
        for (int i = 0; i < 10; ++i)
            root.add(list[i]);

        root.print();
        System.out.println();

    }

}