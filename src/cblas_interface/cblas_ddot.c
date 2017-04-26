/* $Id: hooks.h 3741 2013-10-01 12:54:54Z komart $ */
/* 
 Copyright (C) 2013  Martin Köhler, koehlerm@mpi-magdeburg.mpg.de

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "cblas.h"
#include "cblas_f77.h"
#include "../hooks.h"

double cblas_ddot( const int N, const double *X,
                      const int incX, const double *Y, const int incY)
{
   double dot;
#ifdef F77_INT
   F77_INT F77_N=N, F77_incX=incX, F77_incY=incY;
#else 
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
#endif
   if ( flexiblas_ddot.call_cblas != NULL ) {
	   double te = 0, ts = 0;
	   if ( __flexiblas_profile ) {
		   ts = flexiblas_wtime(); 
	   }
	   double (*fn)(const int , const double *, const int, const double *Y, const int ) = flexiblas_ddot.call_cblas;
	   dot = fn(N,X,incX,Y,incY); 
	   if ( __flexiblas_profile ){
		   te = flexiblas_wtime(); 
		   flexiblas_time_ddot[POS_CBLAS] += (te - ts); 
	   }
   } else {
   	dot =  F77_ddot( &F77_N, X, &F77_incX, Y, &F77_incY);
   }
   flexiblas_call_ddot[POS_CBLAS] ++;


   return dot;
}   
