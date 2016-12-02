/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaa;

import java.util.Scanner;

/**
 *
 * @author USER
 */
public class resizableArray {

    final int DUMMYSIZE = 10;
    private int items[] = new int[DUMMYSIZE];
    private int size = 0;

    public int size() {
        return size;
    }

    public void set(int index, int item) {
        if (index < 0 || index >= size) {
            throw new ArrayIndexOutOfBoundsException();
        }
        items[index] = item;
    }

    public int get(int index) {
        if (index < 0 || index >= size) {
            throw new ArrayIndexOutOfBoundsException();
        }
        return items[index];
    }

    public void append(int item) {
        ensureCapacity();
        items[size] = item;
        size++;

    }

    public void ensureCapacity() {
        if (size == items.length) {
            int copy[] = new int[size * 2];
            System.arraycopy(items, 0, copy, 0, size);
            items = copy;
        }
    }

    public static void main(String args[]) {
        resizableArray array = new resizableArray();
        System.out.println("Size = " + array.size());
        Scanner ob = new Scanner(System.in);
        System.out.print("Enter Size : ");
        array.size = ob.nextInt();
        int i, item;
        System.out.print("Enter Elements : ");
        for (i = 0; i < array.size; i++) {
            item = ob.nextInt();
            array.set(i,item);
        }
        System.out.println("Size = " + array.size());
        System.out.print("Elements in list : ");
        for (i = 0; i < array.size(); i++) {
            System.out.print(array.get(i) + " ");
        }
        array.append(8);
        array.append(80);
        array.append(18);
        System.out.print("Elements in list after appending : ");
        for (i = 0; i < array.size(); i++) {
            System.out.print(array.get(i) + " ");
        }
        System.out.println("Size = " + array.size());
        
    }
}
