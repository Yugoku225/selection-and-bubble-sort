package assignments.selectionsort;
import java.util.Scanner;

public class selectionsort {

    void selection_sort(int array[]) {
        for (int i = 0; i < 5 - 1; i++) {
            int min = i;
            for (int j = i + 1; j < 5; j++) {
                if (array[j] < array[min]) {
                    min = j;
                }
            }
            int temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }

    void show(int array[]) {
        System.out.println("Sorted array:");
        
        for (int i = 0; i < 5; i++) {
            System.out.print(array[i] + " ");
        }
    }

    public static void main(String[] args) {
        int arr[] = new int[5];
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter an array:");
        for (int i = 0; i < 5; i++) {
            arr[i] = sc.nextInt();
        }
        selectionsort obj = new selectionsort();
        obj.selection_sort(arr);
        obj.show(arr);
    }
}
