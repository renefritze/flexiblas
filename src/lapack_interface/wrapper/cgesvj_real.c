/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 * Copyright (C) Martin Koehler, 2015-2017
 */
 /* This file it automatically generated. Please do not edit. */
 /* Generated: Tue Mar 28 16:07:32 2017 */ 
        
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <complex.h>

#include "fortran_mangle.h"

#include "flexiblas.h"



#ifdef INTEGER8
#define blasint int64_t
#else 
#define blasint int 
#endif



#ifdef FLEXIBLAS_ABI_INTEL 
void flexiblas_real_cgesvj_(void* joba, void* jobu, void* jobv, void* m, void* n, void* a, void* lda, void* sva, void* mv, void* v, void* ldv, void* cwork, void* lwork, void* rwork, void* lrwork, void* info, blasint len_joba, blasint len_jobu, blasint len_jobv)
#else
void flexiblas_real_cgesvj_(void* joba, void* jobu, void* jobv, void* m, void* n, void* a, void* lda, void* sva, void* mv, void* v, void* ldv, void* cwork, void* lwork, void* rwork, void* lrwork, void* info, blasint len_joba, blasint len_jobu, blasint len_jobv)
#endif 
{
	void (*fn) (void* joba, void* jobu, void* jobv, void* m, void* n, void* a, void* lda, void* sva, void* mv, void* v, void* ldv, void* cwork, void* lwork, void* rwork, void* lrwork, void* info, blasint len_joba, blasint len_jobu, blasint len_jobv);

	fn = current_backend->lapack.cgesvj.fblas_real; 

		fn((void*) joba, (void*) jobu, (void*) jobv, (void*) m, (void*) n, (void*) a, (void*) lda, (void*) sva, (void*) mv, (void*) v, (void*) ldv, (void*) cwork, (void*) lwork, (void*) rwork, (void*) lrwork, (void*) info, (blasint) len_joba, (blasint) len_jobu, (blasint) len_jobv); 

	return;
}

#ifdef FLEXIBLAS_ABI_INTEL 
void flexiblas_real_cgesvj(void* joba, void* jobu, void* jobv, void* m, void* n, void* a, void* lda, void* sva, void* mv, void* v, void* ldv, void* cwork, void* lwork, void* rwork, void* lrwork, void* info, blasint len_joba, blasint len_jobu, blasint len_jobv)  __attribute__((alias("flexiblas_real_cgesvj_")));

#else 
void flexiblas_real_cgesvj(void* joba, void* jobu, void* jobv, void* m, void* n, void* a, void* lda, void* sva, void* mv, void* v, void* ldv, void* cwork, void* lwork, void* rwork, void* lrwork, void* info, blasint len_joba, blasint len_jobu, blasint len_jobv)  __attribute__((alias("flexiblas_real_cgesvj_")));

#endif


