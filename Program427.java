// Customised Database Management System
class Program427
{
    public static void main(String Arg[])
    {
        DBMS obj = new DBMS();

        obj.InsertIntoTable("Amit","Pune",89);
        obj.InsertIntoTable("Pooja","Mumbai",95);
        obj.InsertIntoTable("Gauri","Pune",90);
        obj.InsertIntoTable("Rahul","Satara",80);
        obj.InsertIntoTable("Neha","Pune",78);

        obj.SelectStarFrom();

        obj.SelectStarFromwhereCity("Pune");
        obj.SelectCount();
        obj.SelectSum();
        obj.SelectAvg();
        obj.SelectMax();
        obj.SelectMin();
    }
}

class node
{
    private static int Counter = 1;

    public int Rno;
    public String Name;
    public String City;
    public int Marks;

    public node next;

    public node(String B, String C, int D)
    {
        Rno = Counter;
        Counter++;

        Name = B;
        City = C;
        Marks = D;
        next = null;
    }
}

class DBMS
{
    private node first;

    public DBMS()
    {
        first = null;
        System.out.println("DBMS initailised succesfully...");
        System.out.println("Student Table gets created succesfully...");
    }

    // InsertLast
    // insert into table student values(1,'Amit','Pune',89);
    public void InsertIntoTable(String Name, String City, int Marks)
    {
        node newn = new node(Name,City,Marks);

        if(first == null)
        {
            first = newn;
        }
        else
        {
            node temp = first;
            while(temp.next != null)
            {
                temp = temp.next;
            }

            temp.next = newn;
        }
        System.out.println("One record gets inserted succesfully...");
    }

    // Display
    // select * from student
    public void SelectStarFrom()
    {
        System.out.println("Data from the student table is : ");

        node temp = first;

        System.out.println("--------------------------------------------------------------");
        while(temp != null)
        {
            System.out.println(temp.Rno+"\t"+temp.Name+"\t"+temp.City+"\t"+temp.Marks);
            temp = temp.next;
        }
        System.out.println("--------------------------------------------------------------");
    }

    // select * from student where city + '____';
    public void SelectStarFromwhereCity(String str)
    {
        System.out.println("Data from the student table where city is : "+str);

        node temp = first;

        System.out.println("--------------------------------------------------------------");
        while(temp != null)
        {
            if(str.equals(temp.City))
            {
            System.out.println(temp.Rno+"\t"+temp.Name+"\t"+temp.City+"\t"+temp.Marks);
            }
            temp = temp.next;
        }
        System.out.println("--------------------------------------------------------------");
    }

    public void SelectCount()
    {
        node temp = first;
        int iCnt = 0;

        while(temp != null)
        {
            temp = temp.next;
            iCnt++;
        }
        System.out.println("Number of records in the table : "+iCnt);
    }

    public void SelectSum()
    {
        node temp = first;
        int iSum = 0;

        while(temp != null)
        {
            iSum = iSum + temp.Marks;
            temp = temp.next;
        }
        System.out.println("Summation of Marks column is : "+iSum);
    }

    public void SelectAvg()
    {
        node temp = first;
        int iSum = 0;
        int iCnt = 0;

        while(temp != null)
        {
            iSum = iSum + temp.Marks;
            temp = temp.next;
            iCnt++;
        }
        System.out.println("Average of Marks column is : "+(float)(float)(iSum/(float)iCnt));
    }

    public void SelectMax()
    {
        node temp = first;
        int iMax = 0;
        int iCnt = 0;

        if(temp != null)
        {
            iMax = temp.Marks;
        }

        while(temp != null)
        {
            if(temp.Marks > iMax)
            {
                iMax = temp.Marks;
            }
            temp = temp.next;
        }
        System.out.println("Maximum of Marks column is : "+iMax);
    }

    public void SelectMin()
    {
        node temp = first;
        int iMin = 0;
        int iCnt = 0;

        if(temp != null)
        {
            iMin = temp.Marks;
        }

        while(temp != null)
        {
            if(temp.Marks < iMin)
            {
                iMin = temp.Marks;
            }
            temp = temp.next;
        }
        System.out.println("Minimum of Marks column is : "+iMin);
    }



}



/*
Supported Queries

1 : insert into student values('Amit','Pune',78);
2 : select * from student;
3 : select * from student where city = 'Pune';
4 : select * from student 
5 : select * from student
6 : select * from student
7 : select * from student
*/