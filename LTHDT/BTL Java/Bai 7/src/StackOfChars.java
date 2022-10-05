public class StackOfChars {
    char[] elements;
    int size;
    int top = -1;

    public StackOfChars() {
        this.size = 16;
        this.elements = new char[this.size];
    }

    public StackOfChars(int capacity) {
        this.size = capacity;
        this.elements = new char[capacity];
    }

    public boolean isEmpty() {
        if(top < 0) return true;
        else return false;
    }

    public boolean isFull() {
        if(top == size) return true;
        else return false;
    }

    public char peak() {
        return elements[top];
    }

    public void push(char ch) {
        top++;
        elements[top] = ch;
    }

    public char pop() {
        int temp = top;
        top--;
        return elements[temp];
    }

    public int getSize() {
        return top;
    }
}
