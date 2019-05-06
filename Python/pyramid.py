def isNotPrime (number):
    if number<=2:
        if number==1:
            return True
        else:
            return False
    else:
        for divider in range(2,(number//3)+1):
            if (number%divider)==0:
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
        return

    else:
        if isNotPrime(listt[currentIndex]):
            currentTotal += listt[currentIndex]

            findMax(listt, lines, currentLn + 1, currentTotal, currentIndex + currentLn + 1)
            findMax(listt, lines, currentLn + 1, currentTotal, currentIndex + currentLn + 2)

        else:
            if currentTotal > maxx:
                maxx = currentTotal
            return

        
        

listt=[]
maxx= float('-inf')
numLines=0

with open("myFile.txt", "r+") as file:
    data = file.readlines() 
    for line in data:
        numLines+=1
        listt += line.strip().split(" ") 
    
listt= list(map(int, listt))


findMax(listt, numLines-1, 0, 0, 0)
print(maxx)
