
   /**
    * \file     samplerate.c
    * \author   François Grondin <francois.grondin2@usherbrooke.ca>
    * \version  2.0
    * \date     2018-03-18
    * \copyright
    *
    * This program is free software: you can redistribute it and/or modify
    * it under the terms of the GNU General Public License as published by
    * the Free Software Foundation, either version 3 of the License, or
    * (at your option) any later version.
    *
    * This program is distributed in the hope that it will be useful,
    * but WITHOUT ANY WARRANTY; without even the implied warranty of
    * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    * GNU General Public License for more details.
    * 
    * You should have received a copy of the GNU General Public License
    * along with this program.  If not, see <http://www.gnu.org/licenses/>.
    *
    */
   
    #include "samplerate.h"

    samplerate_obj * samplerate_construct_zero(void) {

        samplerate_obj * obj;

        obj = (samplerate_obj *) malloc(sizeof(samplerate_obj));

        obj->mu = 0;
        obj->sigma2 = 0.0f;

        return obj;

    }

    samplerate_obj * samplerate_clone(const samplerate_obj * obj) {

        samplerate_obj * clone;

        clone = (samplerate_obj *) malloc(sizeof(samplerate_obj));

        clone->mu = obj->mu;
        clone->sigma2 = obj->sigma2;

        return clone;

    }

    void samplerate_destroy(samplerate_obj * obj) {

        free((void *) obj);

    }

    void samplerate_printf(const samplerate_obj * obj) {

        printf("mu = %u\n",obj->mu);
        printf("sigma2 = %f\n",obj->sigma2);

    }