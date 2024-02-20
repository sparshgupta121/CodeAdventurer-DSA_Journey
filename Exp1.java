import java.util.*;

class Exp1 {
    public static void main(String[] args) {
        int empno[] = { 1001, 1002, 1003, 1004, 1005, 1006, 1007 };
        String empname[] = { "Shivam", "Shubham", "Puja", "Arti", "Vivek", "Karan", "Vinay" };
        String designationcode[] = { "e", "c", "k", "r", "m", "e", "c" };
        String department[] = { "R&D", "PM", "Acct", "Front Desk", "Engg", "Manufacturing", "PM" };
        int basic[] = { 30000, 40000, 20000, 22000, 60000, 33000, 39000 };
        int hra[] = { 8000, 12000, 8000, 6000, 20000, 9000, 12000 };
        int it[] = { 3000, 9000, 1000, 2000, 20000, 4400, 10000 };

        String designationcod emean[] = { "e", "c", "k", "r", "m" };
        String designation[] = { "Engineer", "Consultant", "Clerk", "Receptionist", "Manager" };
        int da[] = { 20000, 32000, 12000, 15000, 40000 };

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter employee number : ");
        int empnumber = sc.nextInt();

        String designationofemployee[] = new String[7];
        int da_sal[] = new int[7];
        int salary[] = new int[7];

        for (int a = 0; a < 7; a++) {
            if (designationcode[a].equals("e")) {
                designationofemployee[a] = "Engineer";
                da_sal[a] = 20000;
            } else if (designationcode[a].equals("c")) {
                designationofemployee[a] = "Consultant";
                da_sal[a] = 32000;
            } else if (designationcode[a].equals("k")) {
                designationofemployee[a] = "Clerk";
                da_sal[a] = 12000;
            } else if (designationcode[a].equals("r")) {
                designationofemployee[a] = "Receptionist";
                da_sal[a] = 15000;
            } else if (designationcode[a].equals("m")) {
                designationofemployee[a] = "Manager";
                da_sal[a] = 40000;
            }
        }

        for (int b = 0; b < 7; b++) {
            salary[b] = basic[b] + hra[b] + da_sal[b] - it[b];
        }

        boolean found = false;

        for (int i = 0; i < 7; i++) {
            if (empno[i] == empnumber) {
                System.out.println("EmpNo  EmpName  Department  Designation  Salary");
                System.out.println(empno[i] + "    " + empname[i] + "    " + department[i] + "  " + designationofemployee[i]
                        + "  " + salary[i]);
                found = true;
            }
        }

        System.out.println("\nAll Entries in the Table are : \n");
        System.out.println("EmpNo  EmpName  Department  Designation  Salary");

        for (int i = 0; i < 7; i++) {
            System.out.println(empno[i] + "  " + empname[i] + "  " + department[i] + "  " + designationofemployee[i]
                    + "  " + salary[i]);
        }

        if (!found) {
            System.out.println(" There is no employee with empid: " + empnumber);
        }
    }
}
