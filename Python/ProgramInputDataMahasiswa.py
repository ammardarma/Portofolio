## PROGRAM DICTIONARY CREATE BY AMMAR. 

mahasiswa = {}
print("SELAMAT DATANG DI PROGRAM INPUT DATA MAHASISWA")
print("-" * 100)
jumlah = int(input("Masukkan jumlah data mahasiswa yang ingin diinput : "))
for i in range(jumlah) : 
	nama = input("Masukkan Nama Mahasiswa : ")
	npm = input ("Masukkan NPM : ")
	mahasiswa.update({nama:npm})
print(mahasiswa)