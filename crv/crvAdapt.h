/*
 * Copyright 2015 Scientific Computation Research Center
 *
 * This work is open source software, licensed under the terms of the
 * BSD license as described in the LICENSE file in the top-level directory.
 */

#ifndef CRVADAPT_H
#define CRVADAPT_H

#include <ma.h>
#include <maAdapt.h>
#include <maInput.h>
#include <maRefine.h>

namespace crv {

bool refine(ma::Adapt* a);

/** \brief experimental function */
ma::ShapeHandler* getShapeHandler(ma::Mesh* m);

void uniformRefine(ma::Mesh* m);

void adapt(ma::Input* in);

}

#endif
