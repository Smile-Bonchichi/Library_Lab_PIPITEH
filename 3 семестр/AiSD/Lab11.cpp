class Search {
public:
	int LineSearch(int* arr, int n, int x, long long& p, long long& s) {
		int k = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i] == x) {
				return i;
			}
			else {
				k++;
			}
			s++;
			p++;
		}
		if (k == n) {
			return 0;
		}
	}
	//Ћинейный поиск

	int BinarySearch(int* arr, int first, int end, int x, int count) {
		int i = (first + end) / 2;
		if (count == 0) {
			return -1;
		}
		if (arr[i] == x) {
			return i;
		}
		else if (arr[i] > x) {
			BinarySearch(arr, 0, i, x, --count);
		}
		else if (arr[i] < x) {
			BinarySearch(arr, i, end, x, --count);
		}
	}
	//Ѕинарный поиск

	int InterSearch(int* arr, int first, int end, int x) {
		int i = ((x - arr[first]) * (end - first)) / (arr[end] - arr[first]);
		if (i < first || i > end) {
			return -1;
		}
		if (arr[i] == x) {
			return i;
		}
		else if (arr[i] > x) {
			InterSearch(arr, 0, i, x);
		}
		else if (arr[i] < x) {
			InterSearch(arr, i, end, x);
		}
	}
	//»нтерпол€ционный поиск
};