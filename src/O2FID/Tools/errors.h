/** \file errors.h */
#ifndef ERRORS_H
#define ERRORS_H

#include "../Mesh/mesh.h"
#include "../Data/data.h"

/*!
 *  \addtogroup Outils
 *  @{
 */

/**
 * @brief Calcul de l'erreur entre la solution numérique et la solution analytique en norme \f$L^2\f$
 * @param mesh un pointeur vers un objet Mesh
 * @param u_ana un vecteur de la solution analytique sur le maillage
 * @param u_num un vecteur de la solution numérique sur le maillage
 * @return \f$\|u_{ana} - u_{num}\|_{L^2}\f$
 */
double GetErrorL2 (Mesh * mesh,
                   const Vector &u_ana,
                   const Vector &u_num);

/**
 * @brief Calcul de l'erreur entre la solution numérique et la solution analytique en norme \f$L^\infty\f$
 * @param mesh un pointeur vers un objet Mesh
 * @param u_ana un vecteur de la solution analytique sur le maillage
 * @param u_num un vecteur de la solution numérique sur le maillage
 * @return \f$\|u_{ana} - u_{num}\|_{L^\infty}\f$
 */
double GetErrorLinf (Mesh * mesh,
                     const Vector &u_ana,
                     const Vector &u_num);

/**
 * @brief Calcul de l'erreur entre la solution numérique et la solution analytique evaleur absolue
 * @param mesh un pointeur vers un objet Mesh
 * @param u_ana un vecteur de la solution analytique sur le maillage
 * @param u_num un vecteur de la solution numérique sur le maillage
 * @return \f$|u_{ana} - u_{num}|\f$
 */
Vector GetErrorAbs (Mesh * mesh,
                    const Vector &u_ana,
                    const Vector &u_num);

/**
 * @brief Calcul de l'erreur entre la solution numérique et la solution analytique en norme \f$l^2\f$ sur la norme \f$l^2\f$ de la solution analytique
 * @param mesh un pointeur vers un objet Mesh
 * @param u_ana un vecteur de la solution analytique sur le maillage
 * @param u_num un vecteur de la solution numérique sur le maillage
 * @return \f$\frac{\|u_{ana} - u_{num}\|_{l^2}}{\|u_{ana}\|_{l^2}}\f$
 */
double GetErrorRela (Mesh * mesh,
                     const Vector &u_ana,
                     const Vector &u_num);

/*! @} End of Doxygen Groups*/

#endif // ERRORS_H
