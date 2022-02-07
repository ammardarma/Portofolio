def binarySearch(arr, kiri, kanan, x):
	while kiri <= kanan:
		tengah = kiri + (kanan - kiri) // 2
		
		if arr[tengah] == x:
			return tengah
		
		elif arr[tengah] < x:
			kiri = tengah +1
		
		else:
			kanan = tengah -1
	
	return -1
	

jum_elemen= int(input("Jumlah elemen: "))
arr = []

for i in range(0, jum_elemen):
	isi = int(input(f'{i+1}==>'))
	arr.append(isi)
print('\n')
arr.sort()

p = int(input('Nilai yang ingin dicari:'))

hasil = binarySearch(arr, 0, len(arr), p)

if hasil!= -1:
	print(f'Elemen ada di indeks - {hasil}')

else:
	print('Elemen yang dicari tidak ditemukan.')