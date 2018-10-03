

public class BinarySearch {

	public int search(int[] arr, int left, int right, int num) {
		
		int m = (left + right) / 2;
		if(right < left) {
			return -1;
		}
		if (arr[m] < num) {
			System.out.println("arr[m] < num");
			this.search(arr, m+1, right, num);
		} else if (arr[m] > num) {
			System.out.println("arr[m] > num");
			this.search(arr, left, m-1, num);
		}
		return m;
	}

	public static void main(String[] args) {
		BinarySearch bs = new BinarySearch();
		int[] arr = { 1,14,26,95,99};
		int size = arr.length;
		int num = 99;
		int left = 0;
		int right = size-1;
		System.out.println(bs.search(arr, left, right, num));
	}
}
