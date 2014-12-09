T = int(input())
while T>0:
    N=int(input())
    lst=[]
    for i in range(0,N):
        b=raw_input().strip()
        lst.append(b)
    minX,maxX,minY,maxY=N,0,N,0
    flag=0
    for x in range(N):
        for y in range(N):
            if lst[x][y]=='#':
                minX,minY=min(minX,x),min(minY,y)
                maxX,maxY=min(maxX,x),max(maxY,y)
                flag+=1
    dx=maxX-minX
    dy=maxY-minY
    if dx*dy==flag:
        print 'CASE #%d: YES' % (T)
    T=T-1
        
