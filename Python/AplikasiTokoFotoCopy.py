def fotocopy() :
	print("Jenis fotocopy apa yang diinginkan?")
	print("1. Hitam Putih")
	print("2. Berwarna")
	print("3. Campur")
	print("")
	opsi=int(input("Silahkan Pilih (1-3) = "))
	if opsi == 3:
		hp = int(input("Masukkan jumlah kertas putih = "))
		wrn = int(input("Masukkan jumlah kertas warna = "))
	else :
		print("")
		jumlah_hal = int(input("MASUKKAN JUMLAH HALAMAN YANG INGIN DI FOTOCOPY =  "))
	ktm = input("Apakah kamu punya KTM? (ya/tidak)") 
	print("")
	if opsi == 1 :
		biaya = jumlah_hal * 100
	elif opsi == 2 :
		biaya = jumlah_hal * 1000
	elif opsi == 3 :
		hp = hp * 100
		wrn = wrn * 1000
		biaya = hp + wrn
	if ktm == "y" :
		diskon = biaya * 0.2 
		biaya = biaya - diskon
	if ktm == "y" or "ya" or "iya" or "Y" or "YA" : 
		print("")
		print ("KARENA ANDA MEMILIKI KARTU TANDA MAHASISWA MAKA KAMI DISKON 20%")
	print ("JUMLAH YANG HARUS ANDA BAYAR DIKASIR ADALAH = Rp.", biaya)
	print ("")
	print ("TERIMAKASIH KARENA SUDAH BERTRANSAKSI :)")

def scan() :
	awal =input("Anda mau melakukan scanning? (Y/N)")
	if awal == "Y" or "y" or "ya" or "iya" :
		harga = int(input("Biaya harga scan adalah 1000/lembar, masukkan jumlah yang ingin anda scan = "))
		harga = harga * 1000
		print("Harga yang harus anda bayar yaitu Rp.", harga)
		print("Silahkan bayar di kasir")

print("")
print (" " * 28, "SELAMAT DATANG DI TUKANG FOTOCOPY DIGITAL AMMAR")
print("")
print ("-" * 100)
print ("Apa yang bisa kami bantu?")
print ("1. Fotocopy")
print ("2. Scanning")
sambut = int(input("Silahkan Pilih (1/2) = "))
if sambut == 1 :
	fotocopy()
else : 
	scan()