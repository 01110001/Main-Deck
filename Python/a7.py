
x1,y1=raw_input("Sol ust kosenin koordinatlarini giriniz").strip().split()
x2,y2=raw_input("Sag alt kosenin koordinatlarini giriniz").strip().split()

xf=int(x2)-int(x1)
yf=int(y1)-int(y2)

print "m * n = %d * %d = %d" %(xf,yf,yf*xf)


input()
