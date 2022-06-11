package Myself.Java;

import java.awt.*;
import java.awt.event.*;



public class Butt extends Frame implements WindowListener,ActionListener{
    Button R=new Button("RED");
    Button B=new Button("BLUE");
    Button G=new Button("GREEN");
    Butt()
    {
        setLayout(new FlowLayout());
        add(R);
        
        add(B);
        
        add(G);
        R.addActionListener(this);
        B.addActionListener(this);
        G.addActionListener(this);
        setSize(400,500);
        setLocation(100,100);
        setVisible(true);
        addWindowListener(this);

        
    }
    
    public void windowOpened(WindowEvent w){}
    public void windowClosed(WindowEvent w){}
    public void windowIconified(WindowEvent w){}
    public void windowDeiconified(WindowEvent w){}
    public void windowActivated(WindowEvent w){}
    public void windowDeactivated(WindowEvent w){}
    public void windowClosing(WindowEvent w){
        this.dispose();
    }
    public static void main(String[] args) {
        new Butt();
    }

    @Override
    public void actionPerformed(ActionEvent e) {

        if(e.getSource()==R)
        {
                setBackground(Color.RED);
        }
        if(e.getSource()==B)
        {
                setBackground(Color.BLUE);
        }
        if(e.getSource()==G)
        {
                setBackground(Color.GREEN);
        }
    }
}
