// Create a program to save the employee information using array in java
import java.io.*;

class workerInfo {
    int code, salary;
    String WorkerName;

    void SetData()
            throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        String s;
        System.out.println("Enter Employee Code :");
        s = bf.readLine();
        code = Integer.parseInt(s);
        System.out.println("Enter Name of Employee :");
        WorkerName = bf.readLine();
        System.out.println("Enter Basic Salary ");
        s = bf.readLine();
        salary = Integer.parseInt(s);
    }

    void ShowDetail() {
        System.out.println("Code :" + code);
        System.out.println("Name : " + WorkerName);
        System.out.println("Salary :" + salary);
    }
}

class employeeDetails {
    public static void main(String args[]) {
        int i;
        try {
            workerInfo Worker[] = new workerInfo[3];
            System.out.println("Enter the Details of three Workers");
            for (i = 0; i <= 2; i++) {
                Worker[i] = new workerInfo();
                Worker[i].SetData();
            }
            System.out.println("The details of three Worker are :");
            for (i = 0; i <= 2; i++) {
                Worker[i].ShowDetail();
            }
        } catch (IOException e) {
        }
    }
};
