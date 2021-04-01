#include "edge.h"

edge::edge(int i_Vertex_Index1, int i_Vertex_Index2)
{
    vertex_Index1 = i_Vertex_Index1;
    vertex_Index2 = i_Vertex_Index2;
    weight = 0;
}

edge::edge(int i_Vertex_Index_1, int i_Vertex_Index_2, float i_weight)
{
    edge(i_Vertex_Index_1, i_Vertex_Index_2);
    weight = i_weight;
}

