class Node:
	def __init__(self, data):
		self.data = data
		self.selanjutnya = None

class LinkedList:
	def __init__(self):
		self.kepala = None
	
	def sisipAwal(self, data_baru):
		simpul_baru = Node(data_baru)
		simpul_baru.selanjutnya = self.kepala
		self.kepala = simpul_baru 
	
	def sisipSetelah(self, simpul_patokan, data_baru):
		if simpul_patokan is None:
			print("Simpul yang dimaksud tidak ada dalam list.")
			return
		
		simpul_baru = Node(data_baru)
		simpul_baru.selanjutnya = simpul_patokan.selanjutnya
		simpul_patokan.selanjutnya = simpul_baru
	
	def sisipAkhir(self, data_baru):
		simpul_baru = Node(data_baru)
		if self.kepala is None:
			self.kepala = simpul_baru
			return
		
		simpul_terakhir = self.kepala
		while simpul_terakhir.selanjutnya:
			simpul_terakhir = simpul_terakhir.selanjutnya
			simpul_terakhir.selanjutnya = simpul_baru
	
	def hapus(self, nilai):
		sementara = self.kepala
		if sementara is not None:
			if sementara.data == nilai:
				self.kepala = sementara.selanjutnya
				sementara = None
				return
		while sementara is not None:
			if sementara.data == nilai:
				break
			sebelum = sementara
			sementara = sementara.selanjutnya
		
		if sementara == None:
			return
		sebelum.selanjutnya = sementara.selanjutnya
		sementara = None
	
	def printList(self):
		sementara = self.kepala
		while sementara:
			if sementara.selanjutnya:
				print (sementara.data, end=" -> ")
			else:
				print (sementara.data)
			sementara = sementara.selanjutnya

			
L_list = LinkedList()			

L_list.sisipAwal(44)
L_list.sisipAwal(33)
L_list.sisipAwal(22)
L_list.sisipAwal(11)
L_list.printList()
			
			
			
			
			
			