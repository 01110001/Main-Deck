x1,y1=map(int,raw_input("Sag ustteki noktanin koordinatlarini giriniz...").strip().split())
x2,y2=map(int,raw_input("Sol alttaki noktanin koordinatlarini giriniz...").strip().split())

xf=(x1+x2)/2.0
yf=(y1+y2)/2.0

print "Orta nokta = %.2f , %.2f" %(xf,yf)
                
input()
