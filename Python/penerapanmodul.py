import bangundatar
print()
print("SELAMAT DATANG DALAM PROGRAM MENGHITUNG LUAS BANGUN DATAR")
print("-"*75)
keluar=0
ulang = 'y'
while ulang == 'y' or 'Y':	
			if keluar == 1 :
					break
			print()
			print("1. Persegi \n2.Persegi Panjang \n3.Segitiga \n4.Lingkaran \n")
			pilih = input("Pilih Operasi menghitung luas yang diinginkan : ")
			print()
			if pilih == '1':
				print (bangundatar.persegi())
			elif pilih == '2':
				print (bangundatar.persegipanjang())
			elif pilih == '3':
				print(bangundatar.segitiga())
			elif pilih == '4':
				print (bangundatar.lingkaran())
			print()
			keluar= int(input("Hitung Lagi?\n1.TIDAK\n2.YA\n\nPilih = "))
			