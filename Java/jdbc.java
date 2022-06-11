package Myself.Java;
import java.sql.*;


public class jdbc
{
    static String role(int i)
    {
        if(i==1)
        return "Instructor";
        return "Learner";
    }
    public static void main(String[] args) {
        try {
            Connection con =DriverManager.getConnection("jdbc:mysql://localhost:3306/roster", "root","" );
            Statement ps=con.createStatement();
            ResultSet rs=ps.executeQuery("SELECT name,title,role FROM user NATURAL JOIN course NATURAL JOIN member");
            while(rs.next())
            {
                System.out.printf("name => %-10s course => %-5s role => %-10s\n", rs.getString(1),rs.getString(2),role(rs.getInt(3)));
            }
            con.close();
        } catch (Exception e) {
            System.out.println(e.getStackTrace());
        }
    }
}