#include "subgraph.h"

void       subgraph_knn_create                (subgraph * sg, int knn);                          /* it creates arcs for each node (adjacency relation)                      */
float     *subgraph_knn_max_distances_evaluate(subgraph * sg, int kmax);                         /* creates arcs for each node (adjacency relation) and returns
                                                                                                    the maximum distances for each k=1,2,...,kmax                           */
void       subgraph_knn_destroy               (subgraph * sg);                                   /* it destroys the adjacency relation                                      */
void       subgraph_pdf_evaluate              (subgraph * sg);                                   /* it computes the pdf for each node                                       */
void       subgraph_k_max_pdf                 (subgraph * sg);                                   /* pdf computation only for sg->bestk neighbors                            */
void       subgraph_best_k_min_cut            (subgraph * sg, int kmin, int kmax);
float      subgraph_pdf_evaluate              (subgraph * sg);
void       subgraph_k_max_clustering          (subgraph * sg);                                   /* opfclustering computation only for sg->bestk neighbors                   */
float      subgraph_k_max_normalized_cut      (subgraph * sg);                                   /* normalized cut computed only for sg->bestk neighbors                     */