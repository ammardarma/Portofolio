def queue():
	q=[]
	return(q)

def enqueue(q,data):
	q.append(data)
	return(q)

def dequeue(q):
	data=q.pop(0)
	return(data)

def isempty(q):
	return (q==[])

def size(q):
	return(len(q))
	
q = queue()

enqueue(q,'G')
enqueue(q,'U')
enqueue(q,'N')
enqueue(q,'A')
enqueue(q,'D')
enqueue(q,'A')
enqueue(q,'R')
enqueue(q,'M')
enqueue(q,'A')
print('queue awal = ',q)
dequeue(q)
print('menghapus item = G')
dequeue(q)
print('menghapus item = U')
print('queue akhir ', q)
print('ukuran queue = ',size(q))
print('apakah queue kosong?',isempty(q))