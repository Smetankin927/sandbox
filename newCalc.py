class Node:
    def __init__(self, Name, NodeIn=0, NodeOut=0, nIn=1, weight=(0,1)):
        self.name = Name
        self.NodeIn = NodeIn
        self.NodeOut = NodeOut
        self.nIn = nIn
        self.weight = weight
		self.cut = false		

 class Edge:
  	def __init__(self, Name ,nIn=1, weight = (0 , 1):
  		self.name = Name
  		self.nIn = nIn
  		self.weight = weight
		  self.cut = false
		  
class Vertex:  #не нужен?
	def __init__(self, Name, NodeIn, NodeOut):
		self.name = Name
		self.NodeIn = NodeIn
		self.Nodeout = NodeOut
		self.cut = false

edges = {"A" : [Edge("B",  5)]} #nIn weight
vertex = {"A" : Vertex("A" , 0 ,1) , "B" : Vertex("B",1,0)} #In Out cut

for Vertex_name in edges: # обернуть в функцию
		for NextVertex in edges[Vertex_name]:
			if (vertex[Vertex_name].NodeIn > 1 
			     and vertex[Vertex_name].NodeOut == 1 
			     and vertex[NextVertex.name].NodeIn ==1 ):
			       	
			       	vertex[Vertex_name].cut = true
			       	vertex[NextVertex.name].cut = true
			       	
			       	
#recursion???
def split(Vertex_Name, vertex, edges, subedges = {}):
			       	   				       	if(vertex[Vertex_Name].cut): ## или конечные точки!!!!
			       	   				       		return subedges #???
			       	   				       	subedges[Vertex_Name] = edges[Vertex_Name]
			       	   				       	for edge in edges[Vertex_Name]:
			       	   				       		NextVertexName  = edge.name
			       	   				       		 subedges = subedges | split(NextVertexName, vertex, edges, subedges)
			       	   				       	
			       	
for Vertex_name in vertex:
							if(vertex[Vertex_Name].cut ): #if true  надо сделать вектор поддиаграмм
									subedges = split(Vertex_Name, vertex, edges)							
