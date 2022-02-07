##PROGRAM KALKULATOR BUATAN AMMAR
class kalkulator:
	def pertambahan(a,b):
		c=a+b 
		return c 
	def pengurangan(a,b):
		c=a-b
		return c 	
	def perkalian(a,b):
		c=a*b
		return c 	
	def pembagian(a,b):
		c=a/b
		return c
	keluar=0
	ulang = 'y'
	while ulang == 'y' or 'Y':	
			if keluar == 1 :
					break
			print()
			print ("\t \t Program Kalkulator Buatan Ammar")
			print()
			a = int(input("Masukkan Bilangan 1: "))
			b = int(input("Masukkan Bilangan 2: "))
			print("1. Penjumlahan \n2.Pengurangan \n3.Perkalian \n4. Pembagian \n")
			pilih = input("Pilih Operasi yang diinginkan : ")
			print()
			if pilih == '1':
				print ("Hasil penjumlahan adalah = ", pertambahan(a,b))
			elif pilih == '2':
				print ("Hasil pengurangan adalah = ", pengurangan(a,b))
			elif pilih == '3':
				print ("Hasil perkalian adalah = ", perkalian(a,b))
			elif pilih == '4':
				print ("Hasil pembagian adalah = ", pembagian(a,b))
			print()
			keluar= int(input("Hitung Lagi?\n1.TIDAK\n2.YA\n\nPilih = "))
			
		

