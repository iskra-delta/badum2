/*
 * balum balum main code
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2024 Tomaz Stih
 *
 * tstih
 * 
 */
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include <ugpx.h>

#include <glyphs/bird.h>

int main() {
    
    /* enter graphics mode */
    ginit(RES_1024x256);

    /* now draw the damn bird */
    int count=sizeof(bird1)/sizeof(pt_t);
    printf("bird points=%d\n",count);
    /*
    for(int n=1;n<count;n++) {
        gdrawline(
            bird1[n-1].x0+300, bird1[n-1].y0,
            bird1[n].x0+300, bird1[n].y0);
    }
    */

    /* exit graphics mode */
    gexit();

    /* all well.. */
    return 0;

}