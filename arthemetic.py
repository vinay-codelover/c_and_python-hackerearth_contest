'''

                            Online Python Compiler.
                Code, Compile, Run and Debug python program online.
Write your code in this editor and press "Run" button to execute it.

'''
s = input()
op = 'plusmynusintoby'
opp = 'pmib'
l = []
l1=[]
k =[]
for j in range(len(s)):
    if(s[j]  in opp):
        k.append(s[j])
for i in range(len(s)):
    if(s[i] not in op):
        l.append(s[i])
    else:
         if(l!=[]):
          l1.append(l)
          l =[]
l1.append(l)
for i in range(len(l1)):
    l1[i] = ''.join(l1[i])
l1 = list(map(int,l1))
print(l1,k)
for i in range(len(k)):
        if(k[i] == 'p'):
          answer = l1[0]+l1[1]
          del l1[0:2]
          l1.insert(0,answer)
          
        elif(k[i] =='i'):
            answer = l1[0]*l1[1]
            del l1[0:2]
            l1.insert(0,answer)
        elif(k[i] == 'b'):
            answer = l1[0]/l1[1]
            del l1[0:2]
            l1.insert(0,answer)
        elif(k[i] == 'm'):
            answer = l1[0]-l1[1]
            del l1[0:2]
            l1.insert(0,answer)
print(int(answer),l1)

