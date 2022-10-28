#!/usr/bin/env python
# coding: utf-8



class Node:
    def __init__(self, Name, NodeIn, NodeOut, nIn=1, weight=(0,1)):
        self.name = Name
        self.NodeIn = NodeIn
        self.NodeOut = NodeOut
        self.nIn = nIn
        self.weight = weight



diagram = {"A" : [Node("B", 1, 1, 5)]}



Ganswer = {}



def calculateG (n):
    tmpG = {}
    
    for i in range(1,n):
        tmpG[((0,1),(i-1 , -(i-2)))] = 1
    return tmpG
        


def Merge(G = {}, Gout = Ganswer):
    for x in G:
        if(x in Gout):
            Gout[x] += 1
        else:
            Gout[x] =1



# # First step 


for x in diagram:
    for y in diagram[x]:
        y.weight = (y.nIn-1 , -(y.nIn-2))# (ep,int)
        G = calculateG(y.nIn)
        Merge(G,Ganswer)
        y.nIn = 1
#на данном этапе остаются только палочки        
        



# # Second step



def collapseParallel(diagram, AName ,RNode, LNode, Gout = Ganswer): #вершины одного имени. R node is c in a : a-b-c; LNode is c
    G = {(RNode.weight, LNode.weight):1}
    RNode.weight = (RNode.weight[0]+LNode.weight[0]+1, RNode.weight[1]+LNode.weight[1]-2)#n1+n2 - 2 + ep (ep,int)
    Merge(G, Gout)
    #we need update NodeOut in a and NodeIn in c 
    
    LNode.NodeIn -=1 #удаляем вершиу b в вершине с 
    #diagram[AName].NodeOut -= 1;# удаляем вершину b в вершине а
    
    for x in diagram: 
        for y in diagram[x]:
            if(y.name == LNode.name):#уменьшаем nodeIn для вершин с во всех вершинах 
                y.NodeIn -=1
            if(y.name == AName):#уменьшаем количество исходящих вершин в вершине а для всех вершин
                y.NodeOut -=1
    
     
    
    



def clapBridge(diagram, NodeName, DelNode, Gout = Ganswer):
    #diagram[DelName] содержит ОДНУ вершину!!!
    #x -- та самая вершина
    DelName = DelNode.name
    x = diagram[DelName][0];#c
    flag = False
    
    #delnode is b
    #diagram[nodename] is "a"
    for y in diagram[NodeName]:
        if(x.name == y.name): # a-b-c and a-c triangle
            x.weight = (x.weight[0] + DelNode.weight[0], x.weight[1] + DelNode.weight[1])#a-b-c -> a-c
            
            collapseParallel(diagram, NodeName ,y, x)
            flag = True
            break
    
    if(flag!=True):    #not triangle
        x.weight = (x.weight[0] + DelNode.weight[0], x.weight[1] + DelNode.weight[1])
        diagram[NodeName].append(x)
   
                     
    diagram.pop(DelName)# удаляем глобално вершину (пофиксить)
    diagram[NodeName].remove(DelNode)#удаляем из списка это ребро
    
    
            
        
    




while(len(diagram)>1):
    for x in diagram:
        for y in diagram[x]:
            if(y.NodeIn == 1 and y.NodeOut ==1):
                clapBridge(diagram, x, y)
                #print("a")
                break
        break







# # third step


from sympy import Symbol, series, gamma, exp, EulerGamma, expand
from sympy import init_printing, pprint
init_printing() 
ep = Symbol('ep')



def Gfunc(n1, n2, d=4-2*ep):
    """
    G(n1,n2) is a 1-loop self-energy function
    d is a space-time dimension, d=4-2*ep by default
    """
    return gamma(d/2 - n1)*gamma(d/2 - n2)*gamma(n1 + n2 - d/2)/gamma(n1)/gamma(d - n1 - n2)/gamma(n2)



def n_bigger_1(n1, n2):
    a = ((n1+n2-3+ep)*(4-n1-n2-2*ep))/(n2-1)*(2-n2-ep)
    return a
def n_less_1(n1,n2):
    a = (n2*(1-n2-ep))/(n1+n2-2+ep)*(3-n1-n2-2*ep)
    return a



ListRes = []



def toG11(dictG = Ganswer, listResult = ListRes):
    for x in dictG:
        n1_int =  x[0][1]
        n2_int =  x[1][1]
        
        n1_ep  =  x[0][0]
        n2_ep  =  x[1][0]
        
        n1 = n1_int + n1_ep*ep
        n2 = n2_int + n2_ep*ep
        
        F = 1
        
        while(n2_int != 1):
            if(n2_int > 1):
                a = n_biger_1(n1, n2)
                F = F*a
                n2_int -=1
                
            if (n2_int < 1):
                a = n_less_1(n1, n2)
                F = F*a
                n2_int +=1
                
        while(n1_int != 1):
            if(n1_int > 1):
                a = n_biger_1(n2, n1)
                F = F*a
                n1_int -=1
                
            if (n1_int < 1):
                a = n_less_1(n2, n1)
                F = F*a
                n1_int +=1
        #print(F)
        F = (F*Gfunc(1+n1_ep*ep, 1+n2_ep*ep))**dictG[x]
        listResult.append(F)


toG11(Ganswer, ListRes)


Final =1
for i in ListRes:
    Final = Final*i
    


Final = Final/(Gfunc(1,1)**4)



pprint(Final)

f = open('text.txt', 'w')
f.write(str(Final))



