def Stack():
	s = [1,2,3,4,5]
	return s
def push(s,data) :
	s.append(data)
	
def pop(s):
	data = s.pop()
	return data

s = Stack()

print(s)
print("data masuk 6")
push(s,6)
print("data sekarang ", s)
print("data yang keluar adalah : ", s.pop())
print("data terakhir adalah : ", s)