/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package oop;

/**
 *
 * @author hasan
 */
public class BoxWeight extends Box{

    double weight;

    BoxWeight(double weight, double l, double w, double h) {
        super(l, w, h);
        this.weight = weight;
    }
    BoxWeight(BoxWeight obj)
    {
        super(obj);
        this.weight=obj.weight;
    }
    BoxWeight(double weight) {
        this.weight = weight;
    }
    
}
