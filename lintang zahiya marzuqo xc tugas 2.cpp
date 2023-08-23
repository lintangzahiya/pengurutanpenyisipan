#include <stdlib.h>
#include <iostream>

using namespace std;
void Insrtion_Sort(int array[], int length);

int main()
{
         int i, n;
         cout << "Masukan jumlah elemen yg diurutkan: ";
         cin >> n;
         int A[n];
         for(i = 0; i < n; i++)
         {
		         cout<< "Masukan bilangan ke-" << i+1 << " : ";
		          cin >> A[i];
	     }
	     Insertion_Sort(A, n);
	     system("pause");
	    return 0;
}

void Insertion_Sort(int array[], int length)
{
         int i, j, key;
         for (i = 1; i < length; i++)
         {
		      j = i;
		      while (j > 0 && array[j - 1] > array[j])
		      {
			         key = array[j];
			         array[j] = array[j - 1];
			         array[j - 1] = key;
			         j--;
       		  }
         }
         cout << "Hasil Pengurutan: ";
         for (j = 0; j < length; j++)
         {
		         cout <<" "<< array[j];
	     }
	     cout << endl;
}
