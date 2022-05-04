# Nama file: LS.py
# Pembuat: Adira Rahmana Akbar_24060121140114
# Tanggal: 5 September 2021
# Deskripsi: menerima empat buah bilangan riil yang pengertiannya adalah
# dua pasang titik pada koordinat kartesian, dan menghasilkan sebuah bilangan
# riil yang merupakan jarak dari kedua titik tersebut

# Definisi dan spesifikasi dari fungsi LS(x1,y1,x2,y2):V dif2(y2,y1)+ dif2(x2,x1)
# LS : 4 real --> real
# dif2 : 2 real --> real
# FX2 : real --> real

# Realisasi
def FX2(x):
    return(x*x)
def dif2(x,y):
    return FX2(x-y)
def LS(x1,y1,x2,y2):
    return (dif2(y2,y1) + dif2(x2,x1))**0.5

# Aplikasi
a = LS(1,3,5,6)
print(a)