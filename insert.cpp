public class insertatfirst {
    public static void main(String[] args) {
        int[] arr = {2, 3, 4, 5}; // Original array
        int n = arr.length;
        int x = 11; // Element to insert at first position

        // Create new array with size + 1
        int[] newArr = new int[n + 1];

        // Insert the new element at index 0
        newArr[0] = x;

        // Copy the old elements starting from index 1
        for (int i = 0; i < n; i++) {
            newArr[i + 1] = arr[i];
        }

        // Print the new array
        System.out.print("Array after insertion: ");
        for (int i = 0; i < newArr.length; i++) {
            System.out.print(newArr[i] + " ");
        }
    }
}
