/*
 * Copyright (C) 2011 Scientific Computation Research Center
 *
 * This work is open source software, licensed under the terms of the
 * BSD license as described in the LICENSE file in the top-level directory.
 */

#ifndef AWR_H
#define AWR_H

/** \file awr.h
 *  \brief The AWR error estimation interface
 */

#include "apf.h"
#include "Teuchos_ParameterList.hpp"

/** \namespace awr
  * \brief All AWR error estimation functions
  */
namespace awr {

apf::Field* solveAdjointProblem(const Teuchos::ParameterList& params);

}

#endif
