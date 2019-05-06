def isNotPrime (x):
    if x<=2:
        if x==1:
            return True
        else:
            return False
    else:
        for y in range(2,(x//3)+1):
            if (x%y)==0:
                return True
        return False


def findMax(listt, lines, currentLn, currentTotal, currentIndex):
    global maxx

    if currentLn == lines:
        if isNotPrime(listt[currentIndex]):
            if (currentTotal + listt[currentIndex]) > maxx:
                maxx = currentTotal + listt[currentIndex]
        else: 
            if currentTotal > maxx:
                maxx = currentTotal
        return 0
    else:
        if isNotPrime(listt[currentIndex]):
            currentTotal += listt[currentIndex]

            findMax(listt, lines, currentLn + 1, currentTotal, currentIndex + currentLn + 1)
            findMax(listt, lines, currentLn + 1, currentTotal, currentIndex + currentLn + 2)
        else:
            if currentTotal > maxx:
                maxx = currentTotal
            return 0

        
        

listt=[]
maxx= float('-inf')
#print(maxx)
numLines = sum(1 for line in open('myFile.txt'))


with open("myFile.txt", "r+") as file:
    data = file.readlines() 
    for line in data:
        listt += line.strip().split(" ") 
    
listt= list(map(int, listt))
#print (listt)


findMax(listt, numLines-1, 0, 0, 0)
print(maxx)
