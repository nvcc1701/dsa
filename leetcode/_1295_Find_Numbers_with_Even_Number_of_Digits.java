public class _1295_Find_Numbers_with_Even_Number_of_Digits {
    public static int findNumbers(int[] nums) {
        int count = 0;
        for (int i : nums) {
            if(check(i)) {
                count++;
            }
        }
        return count;
    }



    private static boolean check(int i) {
        boolean a = true;
        while(i != 0) {
            i/=10;
            a = !a;
        }
        return a;
    }

    public static void main(String[] args) {
        int[] nums = {12,345,2,6,7896};
        System.out.println(findNumbers(nums));
    }
}