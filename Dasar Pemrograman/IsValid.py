# Nama file: IsValid.py
# Pembuat: Adira Rahmana Akbar_24060121140114
# Tanggal: 5 September 2021
# Deskripsi: menerima sebuah besaran integer, dan menentukan apakah
# bilangan tersebut valid

# Definisi dan spesifikasi dari fungsi IsValid(x) adalah:
# IsValid(x) : integer --> boolean
# {IsValid(x) benar jika (x) bernilai lebih kecil dari 5
# atau lebih besar dari 500}

# Realisasi
def IsValid(x):
    return x<5 or x>500

# Aplikasi
a = IsValid(5)
print(a)
b = IsValid(0)
print(b)
c = IsValid(500)
print(c)
d = IsValid(6000)
print(d)