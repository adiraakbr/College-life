# Nama file: IsPositif.py
# Pembuat: Adira Rahmana Akbar_24060121140114
# Tanggal: 5 September 2021
# Deskripsi: menghasilkan sebuah nilai boolean yang bernilai True jika bilangan
# tersebut positif, atau False jika bilangan tersebut negatif

# Definisi dan spesifikasi dari fungsi IsPositif(x) adalah:
# IsPositif : integer --> boolean
# {IsPositif(x) benar jika x positif}

# Realisasi
def IsPositif(x):
    return x >= 0

# Aplikasi
a = IsPositif(1)
print(a)
b = IsPositif(0)
print(b)
c = IsPositif(-1)
print(c)
