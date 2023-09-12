#include <iostream>
#include <chrono>
using namespace std;

int partition(int Arr[], int d, int y)
{
	int p = Arr[y], i = (d - 1), gecici = 0;
	for (int j = d; j <= y - 1; j++)
	{
		if (Arr[j] <= p)
		{			
			i++;
			gecici = Arr[i];
			Arr[i] = Arr[j];
			Arr[j] = gecici;
			
		}
	}
	gecici = Arr[i + 1];
	Arr[i + 1] = Arr[y];
	Arr[y] = gecici;
	
	return (i + 1);
}
void quickSort(int arr[], int down, int up)
{
	if (down < up)
	{
		int P = partition(arr, down, up);
		quickSort(arr, down, P - 1);
		quickSort(arr, P + 1, up);
	}
}

void merge(int array[], int const l, int const m, int const r)
{
	auto const sagDizi = r - m;
	auto const solDizi = m - l + 1;

	auto* RightArray = new int[sagDizi] ,* LeftArray = new int[solDizi];
	for (auto i = 0; i < sagDizi; i++)
		RightArray[i] = array[m + 1 + i];
	for (auto j = 0; j < solDizi; j++)
		LeftArray[j] = array[l + j];
	auto AdresSolDizi = 0,AdresSagDizi = 0; 
	int AdresMergeDizi = l;
	while (AdresSolDizi < solDizi && AdresSagDizi < sagDizi) {
		if (LeftArray[AdresSolDizi] <= RightArray[AdresSagDizi]) {
			array[AdresMergeDizi] = LeftArray[AdresSolDizi];
			AdresSolDizi++;
		}
		else {
			array[AdresMergeDizi] = RightArray[AdresSagDizi];
			AdresSagDizi++;
		}
		AdresMergeDizi++;
	}
	while (AdresSolDizi < solDizi) {
		array[AdresMergeDizi] = LeftArray[AdresSolDizi];
		AdresSolDizi++;
		AdresMergeDizi++;
	}
	while (AdresSagDizi < sagDizi) {
		array[AdresMergeDizi] = RightArray[AdresSagDizi];
		AdresSagDizi++;
		AdresMergeDizi++;
	}
}

void mergeSort(int array[], int const bas, int const son)
{
	if (bas >= son)
		return;

	auto orta = bas + (son - bas) / 2;
	mergeSort(array, bas, orta);
	mergeSort(array, orta + 1, son);
	merge(array, bas, orta, son);
}

void Insertion(int* array, int size) {
	int k,j;
	for (int i = 1; i < size; i++) {
		k=array[i];
		j = i;
		while (j > 0 && array[j - 1] > k) {
			array[j] = array[j - 1];
			j--;
		}
		array[j] = k;
	}
}

int main()
{
	int n = 0;
	int* arrQuickSort = NULL;
	int* arrMergeSort = NULL;
	int* arrInsertionSort = NULL;
	cin >> n;
	arrQuickSort = new int[n];
	arrMergeSort = new int[n];
	arrInsertionSort= new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arrInsertionSort[i];
		arrMergeSort[i] = arrInsertionSort[i];
		arrQuickSort[i] = arrInsertionSort[i];
	}
	string fast = "";
	std::chrono::nanoseconds sorttime ;
	auto begin = std::chrono::high_resolution_clock::now();
	Insertion(arrInsertionSort, n);
	auto end = std::chrono::high_resolution_clock::now();
	auto zamanInsertionSort = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
	sorttime = zamanInsertionSort;
	fast = "Insertion";
	
	auto begin1 = std::chrono::high_resolution_clock::now();
	quickSort(arrQuickSort,0, n -1);
	auto end1 = std::chrono::high_resolution_clock::now();
	auto zamanQuickSort = std::chrono::duration_cast<std::chrono::nanoseconds>(end1 - begin1);
	if (zamanQuickSort < sorttime)
	{
		sorttime = zamanQuickSort;
		fast = "Quick";
	}
	
	auto begin2 = std::chrono::high_resolution_clock::now();	
	mergeSort(arrMergeSort, 0, n - 1);	
	auto end2 = std::chrono::high_resolution_clock::now();
	auto zamanMergeSort = std::chrono::duration_cast<std::chrono::nanoseconds>(end2 - begin2);
	if (zamanMergeSort < sorttime)
	{
		zamanMergeSort = zamanQuickSort;
		fast = "Merge";
	}
	cout << "En hizli: " << fast <<endl;

	return 0;
}
