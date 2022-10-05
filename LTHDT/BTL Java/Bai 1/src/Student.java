public class Student {
    private String msv;
    private String ten;
    private String lop;
    private String khoa;

    public Student(String msv, String ten, String lop, String khoa) {
        this.msv = msv;
        this.ten = ten;
        this.lop = lop;
        this.khoa = khoa;
    }

    public void show() {
        System.out.print("Ma sinh vien: " + this.msv + "\n"
                + "Ten: " + this.ten + "\n" + "Lop: " + this.lop + "\n"
                + "Khoa: " + this.khoa);
    }
}


