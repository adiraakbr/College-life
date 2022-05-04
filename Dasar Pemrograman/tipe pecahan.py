# Nama file: pecahan.py
# Pembuat: Adira Rahmana Akbar
# Tanggal: 24 September 2021
# Deskripsi: Membuat tipe bentukan pecahan beserta dengan konstruktor dan selektornya

# Definisi dan Spesifikasi Tipe
# type pecahan: <n: integer, d: integer>
# {<n:integer >= 0, d: integer > 0> n adalah pembilang(numerator) dan d adalah penyebut(denumerator). Penyebut sebuah pecahan tidak boleh nol} 
# Definisi dan Spesifikasi Konstruktor
# MakeP: integer >= 0, integer > 0 --> pecahan
#   {MakeP(x,y) membentuk sebuah pecahan dari pembilang x dan penyebut y, dengan x dan y integer}
# Realisasi dalam python

class Pecahan:
  def __init__(self,n,d):
    self.pembilang = n
    self.penyebut = d

# Definisi dan spesifikasi Selektor dengan Fungsi
# pemb : pecahan --> integer >= 0
#   {pemb(p): memberikan numerator pembilang n dari pecahan tsb} 
# peny : pecahan --> integer >= 0
#   {peny(p): memberikan denumerator pembilang d dari pecahan tsb} 
# Realisasi dalam python

def pemb(P):
  return P.pembilang

def peny(P):
  return P.penyebut

# Definisi dan Spesifikasi Operator Terhadap Pecahan
# AddP: 2 pecahan --> pecahan
#   {AddP(P1, P2): Menambahkan dua buah pecahan P1 dan P2: n1/d1+n2/d2 = (n1*d2+n2*d1)/d1*d2}
# SubP: 2 pecahan --> pecahan
#   {SubP(P1, P2): Mengurangkan dua buah pecahan P1 dan P2.
#   Mengurangkan dua pecahan: n1/d1 - n2/d2 = (n1*d2 - n2*d1)/d1*d2}
# MulP: 2 pecahan --> pecahan
#   {MulP(P1, P2): Mengalikan dua buah pecahan P1 dan P2
#   Mengalikan dua pecahan: n1/d1*n2/d2 = n1*n2/d1*d2}
# DivP: 2 pecahan --> pecahan
#   {DivP(P1,P2): Membagi dua buah pecahan P1 dan P2
#   Membagi dua pecahan: (n1/d1)/(n2/d2) == n1*d2/d1*d2}
# RealP: pecahan --> real
#   {Menuliskan bilangan pecahan dalam notasi desimal}
# Realisasi dalam python

def AddP(P1, P2): 
  return Pecahan(pemb(P1)*peny(P2)+pemb(P2)*peny(P1),peny(P1)*peny(P2))
def SubP(P1, P2):
  return Pecahan(pemb(P1)*peny(P2)-pemb(P2)*peny(P1),peny(P1)*peny(P2))
def MulP(P1, P2):
  return Pecahan(pemb(P1)*pemb(P2),peny(P1)*peny(P2))
def DivP(P1, P2):
  return Pecahan(pemb(P1)*peny(P2),peny(P1)*pemb(P2))
def RealP(P):
  return pemb(P)/peny(P)

# Definisi dan Spesifikasi Predikat
# isEqP?: 2 pecahan --> boolean
#   {isEqP?(p1, p2) true jika p1 = p2
#   Membandingkan apakah dua buah pecahan sama nilainyaL n1/d1 = n2/d2 jika dan hanya jika n1d2 = n2d1}
# isLtP?: 2 pecahan --> boolean
#   {isLtP?(p1, p2) true jika p1 < p2
#   Membandingkan dua buah pecahan, apakah p1 lebih kecil nilainya dari p2: n1/d1 < n2/d2 jika dan hanya jika n1d2 < n2d1}
# isGtP?: 2 pecahan --> boolean
#   {isGtP?(p1,p2) true jika p1 > p2
#   Membandingkan nilai dua puluh, apakah p1 lebih besar nilainya dari p2: n1/d1 > n2/d2 jika dan hanya jika n1d2 > n2d1}
# Realisasi dalam python

def isEqP(P1, P2):
  return pemb(P1)/peny(P1) == pemb(P2)/peny(P2)
def isLtP(P1, P2):
  return pemb(P1)/peny(P1) < pemb(P2)/peny(P2)
def isGtP(P1, P2):
  return pemb(P1)/peny(P1) > pemb(P2)/peny(P2)

# Aplikasi
print(RealP(AddP(Pecahan(6,7),Pecahan(8,9))))
print(RealP(SubP(Pecahan(1,3),Pecahan(5,9))))
print(RealP(MulP(Pecahan(5,4),Pecahan(1,2))))
print(RealP(DivP(Pecahan(3,4),Pecahan(9,6))))
print(isEqP(Pecahan(2,6),Pecahan(1,5)))
print(isLtP(Pecahan(8,4),Pecahan(6,7)))
print(isGtP(Pecahan(6,9),Pecahan(2,5)))