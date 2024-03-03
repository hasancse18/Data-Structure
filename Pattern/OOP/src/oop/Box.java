
package oop;

/**
 *
 * @author hasan
 */
public class Box {
    double l;
    double w;
    double h;
    
    Box()
    {
        this.l=-1;
        this.w=-1;
        this.h=-1;
    }

    Box(double l, double w, double h) {
        this.l = l;
        this.w = w;
        this.h = h;
    }
    Box(Box obj)
    {
        this.l=obj.l;
        this.w=obj.w;
        this.h=obj.h;
    }
    
}
