## Program Menyediakan Kebutuhan Rumah Tangga.

import KRT
print("-"*100)
print("Selamat datang di program kebutuhan rumah tangga\nKami disini membantu anda menyarankan segala macam perabotan rumah tangga yang diperlukan.")
print("-"*100)
print()
keluar=0
ulang = 'y'
while ulang == 'y' or 'Y':	
			if keluar == 1 :
					break
			print()
			print("1. Dapur \n2. Ruang Tamu \n3. Ruang Makan \n4. Kamar Mandi \n5. Kamar \n6. Halaman Belakang\n7. Garasi\n")
			pilih = input("Pilih Saran Perabotan di ruangan yang anda inginkan! : ")
			print()
			if pilih == '1':
				print (KRT.dapur())
			elif pilih == '2':
				print (KRT.ruang_tamu())
			elif pilih == '3':
				print(KRT.ruang_makan())
			elif pilih == '4':
				print (KRT.kamar_mandi())
			elif pilih == '5':
				print (KRT.kamar())
			elif pilih == '6':
				print (KRT.halaman_belakang())
			elif pilih == '7':
				print (KRT.garasi())
			print()
			keluar= int(input("Pilih Lagi?\n1.TIDAK\n2.YA\n\nPilih = "))
