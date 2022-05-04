# Nama file: mean_olympique.py
# Pembuat: Adira Rahmana Akbar_24060121140114
# Tanggal: 5 September 2021
# Deskripsi: menghitung rata rata dari dua buah bilangan integer, yang bukan
# maksimum dan bukan minimum dari 4 buah integer: (u+v+w+x-min4 (u,v,w,x) - max4)
# (u,v,w,x))/2

# Definisi dan spesifikasi dari fungsi MO (u,v,w,x) adalah:
# max4 : 4 integer>0 --> integer
# min4 : 4 integer>0 --> integer
# max2 : 2 integer>0 --> integer
# min4 : 2 integer>0 --> integer

# Realisasi
def max2(a,b):
    return(a+b + abs(a-b))/2
def min2(a,b):
    return(a+b - abs(a-b))/2
def max4(i,j,k,l):
    return max2(max2(i,j), max2(k,l))
def min4(i,j,k,l):
    return min2(min2(i,j), min2(k,l))
def MO(u,v,w,x):
    return (u+v+w+x-min4(u,v,w,x) - max4(u,v,w,x))/2

# Aplikasi
a = MO(8,12,10,20)
print(a)