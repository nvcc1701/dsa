public class MyPoint {
    private double x;
    private double y;
    public int maxX;
    public int maxY;

    public MyPoint(double x, double y) {
        this.x = x;
        this.y = y;
    }

    public MyPoint(MyPoint p) {
        this.x = p.x;
        this.y = p.y;
    }

    public double getX() {
        return this.x;
    }

    public double getY() {
        return this.y;
    }

    public double distance(MyPoint secondPoint) {
        if(this.x - secondPoint.x == 0) return Math.abs(this.y - secondPoint.y);
        else if(this.y - secondPoint.y == 0) return Math.abs(this.x - secondPoint.x);
        else {
            double dai = Math.abs(this.x - secondPoint.x);
            double rong = Math.abs(this.y - secondPoint.y);
            dai *= dai; rong *= rong;
            return Math.sqrt(dai + rong);
        }
    }

    public double distance(MyPoint p1, MyPoint p2) {
        if(p1.x - p2.x == 0) return Math.abs(p1.y - p2.y);
        else if(p1.y - p2.y == 0) return Math.abs(p1.x - p2.x);
        else {
            double dai = Math.abs(p1.x - p2.x);
            double rong = Math.abs(p1.y - p2.y);
            dai *= dai; rong *= rong;
            return Math.sqrt(dai + rong);
        }
    }

    public void setLocation(int x, int y) {
        this.maxX = x;
        this.maxY = y;
    }
}
