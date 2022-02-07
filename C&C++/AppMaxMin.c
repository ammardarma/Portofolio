//digunakan untuk memasukkan library stdio agar dapat menerima input dan output
#include<stdio.h>
//membuat array dengan besaran 100
int a[100];
//mendeklarasikan variabel max dan min 
int max, min;
//mendeklarasikan fungsi maxmin()
void maxmin();

//fungsi utama
int main()  {
//mendeklarasikan variabel i dan num
	int i, num;
	

	printf("\n\t\t\tMaximum Dan Minimum\n\n");
//menerima input angka dan memasukkannya ke variabel num
	printf("Masukkan Banyak Angka: ");
	scanf("%d", &num);

//menerima input angka dan memasukkannya ke array a
	printf("\nMasukkan Angka-angkanya: \n");
	for(i = 0; i < num; i++) {
		scanf("%d", &a[i]);
	}

//menampilkan angka-angka yang dimasukkan ke dalam array a
	printf("\nAngka-angkanya adalah: \n");
	for (i = 0; i < num; i++) {
		printf("%d ", a[i]);
	}

//menampilkan output angka maksimum dan minimum melalui fungsi maxmin 	
	max = a[0];
	min = a[0];
	maxmin(0,num - 1);
	printf("\n\nMaksimum Angka: %d\n", max);
	printf("Minimum Angka: %d\n", min);
	return 0;
}

//fungsi maxmin yang akan menentukan angka yang maksimum dan angka yang minimum
void maxmin(int i, int j) {
//mendeklarasikan variabel max1,min1, dan mid
	int max1, min1, mid;
//untuk n = 1 
//jika i = j, maka maksimal dan minimal angkanya adalah sama
	if (i == j) {
		max = min = a[i];
//untuk n = 2
//jika i sama dengan j dikurang 1 dan bila a[i] lebih besar dari a [j] maka angka maksimum berada di a[i] dan minimum berada di a[j]
	} else if (i == j - 1) {
		if (a[i] > a [j]) {
			max = a[i];
			min = a[j];
		} 
// dan bila sebaliknya, maka max berada di j dan min berada di i.
else {
			max = a[j];
			min = a[i];
		}
	}
//untuk n > 2 
//harus ada pembagian di tengah di antara banyaknya bilangan
	 else {
		mid = (i + j) / 2;
//maka dihitung dari i sampai bilangan tengah 
		maxmin(i, mid);
		max1 = max;
		min1 = min;
//dihitung dari tengah sampai dengan bilangan akhir
		maxmin(mid + 1, j);
		if (max < max1)
			max = max1;
		if (min > min1)
			min = min1;
	}
}