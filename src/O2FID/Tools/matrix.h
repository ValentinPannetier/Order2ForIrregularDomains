/** \file matrix.h */
#ifndef MATRIX_H
#define MATRIX_H

#include "../Mesh/mesh.h"
#include "../Data/data.h"
#include "../Data/datatypedefinitions.h"

#include "../Toolbox/differencefinite.h"

#include <cmath>

/*!
 *  \addtogroup Outils
 *  @{
 */

/**
 * @brief Cette fonction retourne une sparsematrix qui discrétise uniquement l'opérateur Laplacien sans préoccupation des conditions aux limites
 * @param mesh un pointeur vers un objet Mesh
 * @return Matrix du problème de la chaleur
 */
Matrix Laplacian (Mesh * mesh);

/**
 * @brief Cette fonction actualise une ligne donnée de la matrice du Laplacien (cf. algorithme.pdf)
 * @param A la matrice du Laplacien
 * @param P_m Point* à actualiser
 * @param gamma l'entier correspondant à l'axe dans la direction duquel on fait la mise à jour
 */
void Actualise_Ligne (Matrix &A, Point* P_m, AXIS_LABEL gamma);

/**
 * @brief Cette fonction trie la liste des voisins d'un point donné par direction : d'abord les voisins en direction x, puis y, puis z
 * @param P le point dont on va trier la liste des voisins
 */
void Sort_Neighbours (Point* P);


/**
 * @brief InsertBeta
 * @param mesh
 * @param A
 * @param beta
 */
void InsertBeta (Mesh* mesh, Matrix* A, Vector* beta);


void RemovePeriodicity (Mesh* mesh, Matrix* A);

Matrix Gradient (Mesh* mesh, ORDERS order);

/*! @} End of Doxygen Groups*/

#endif // MATRIX_H
