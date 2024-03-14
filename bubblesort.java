import java.util.Scanner;

public class bubblesort 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        int[] array = new int[5];
        
        System.out.print("Enter your array: ");
        for(int i = 0; i < 5; i++) 
        {
            array[i] = scanner.nextInt();
        }

        for(int i = 0; i < 5 - 1; i++) 
        {
            for(int j = 0; j < 5 - i - 1; j++) 
            {
                if(array[j] > array[j + 1]) 
                {
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }

        System.out.print("Sorted array is: ");
        for(int i = 0; i < 5; i++) 
        {
            System.out.println(array[i] + " ");
        }
        
    }
}

