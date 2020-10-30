public class StackOfIntegers {
    private int[] elements;
    private int size;
    private int top = -1;

    public StackOfIntegers() {
        this.size = 16;
    }

    public StackOfIntegers(int capacity) {
        this.size = capacity;
    }

    public boolean isEmpty() {
        if(this.top == this.size) return true;
        else return false;
    }

    public int peak() {
        return this.elements[top];
    }

    public void push(int value) {
        top++;
        elements[top] = value;
    }

    public int pop() {
        int lastValue = elements[top];
        top--;
        return lastValue;
    }

    public int getSize() {
        return top;
    }


}
