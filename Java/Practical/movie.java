import java.util.*;

class movie {
    public static void main(String args[]) {
        try (Scanner in = new Scanner(System.in)) {
            String mname;
            System.out.print("\n\t Enter the movie name = ");
            mname = in.nextLine();
            movieInfo ob = new movieInfo();
            ob.pricendetail(mname);
        }
    }
}

class movieInfo {
    String ma[] = new String[4];
    String mc[] = new String[4];

    // price per week=INR10.
    movieInfo() {
        ma[0] = "fast";
        ma[1] = "pearl harbor";
        ma[2] = "death note";
        ma[3] = "ratatouille";

        mc[0] = "Josh Hartnett";
        mc[1] = "Ben Affleck";
        mc[2] = "Michael Bays";
        mc[3] = "Jerry Bruckheimer";
    }

    void pricendetail(String mname) {
        int i = 0, j = 0;
        while (i < 4) {
            if (mname.equals(ma[i])) {
                System.out.println(
                        "\n\t Movie: " + mname + " \n\t Main character: " + mc[i] + "\n\t Price per week = INR 10.00");
                j = 1;
                break;
            }
            ++i;
        }
        if (j == 0)
            System.out.println("\n\t " + mname + " is not available.");
    }
}
