// Customised Database Management System

class Program418
{
    public static void main(String Arg[])
    {
        obj.InsertInotoTable(1,"Amit","Pune",89);
        obj.InsertInotoTable(1,"Pooja","Mumbai",95);
        obj.InsertInotoTable(1,"Rahul","Satara",80);
        obj.InsertInotoTable(1,"Neha","Pune",78);
    }
}

class node
{
   public int Rno;
   public String Name;
   public String City;
   public int Marks;

   public node next;

   public node(int A, String B, String C, int D)
   {
        Rno = A;
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
        
    }

    public void InsertInotoTable(int Rno, String Name, String City, int Marks)
    {
        
    }
}
